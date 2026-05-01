package com.trunpm.truvideoreactcoresdk

import androidx.annotation.NonNull
import com.facebook.react.bridge.Promise
import com.facebook.react.bridge.ReactApplicationContext
import com.facebook.react.bridge.ReactContextBaseJavaModule
import com.facebook.react.bridge.ReactMethod
import com.truvideo.sdk.core.TruvideoSdk
import com.truvideo.sdk.core.interfaces.TruvideoSdkCallback
import com.truvideo.sdk.model.exceptions.TruvideoSdkException
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
//import truvideo.sdk.common.exceptions.TruvideoSdkException
import java.security.InvalidKeyException
import java.security.NoSuchAlgorithmException
import javax.crypto.Mac
import javax.crypto.spec.SecretKeySpec
import kotlin.coroutines.Continuation
import kotlin.coroutines.EmptyCoroutineContext
import kotlin.coroutines.startCoroutine

import kotlinx.coroutines.withContext
import org.json.JSONObject
import java.io.BufferedReader
import java.io.InputStreamReader
import java.net.HttpURLConnection
import java.net.URL

class TruVideoReactCoreSdkModule(reactContext: ReactApplicationContext) :
  ReactContextBaseJavaModule(reactContext) {
  private val scope = CoroutineScope(Dispatchers.Main)
  override fun getName(): String {
    return NAME
  }

  @ReactMethod
  fun isAuthenticated(promise: Promise){
    promise.resolve(TruvideoSdk.isAuthenticated)
  }
//  @ReactMethod
//  fun isAuthenticationExpired(promise: Promise){
//    promise.resolve(TruvideoSdk.isAuthenticationExpired())
//  }
//  @ReactMethod
//  fun authentication(apiKey : String , secretKey : String,extenalId: String, promise: Promise) {
//    scope.launch {
//      authenticate(apiKey, secretKey,extenalId,promise)
//    }
//  }

  @ReactMethod
  fun generatePayload(promise: Promise){
    promise.resolve(TruvideoSdk.generatePayload())
  }

  @ReactMethod
  fun authenticate(apiKey : String, payload : String, signature : String, externalId :String,promise: Promise){
    TruvideoSdk.authenticate(
      apiKey = apiKey,
      payload = payload,
      signature = signature,
      externalId = externalId, object : TruvideoSdkCallback<Unit> {
        override fun onComplete(result: Unit) {
          promise.resolve("Authenticate Successful")
        }
        override fun onError(exception: TruvideoSdkException) {
          promise.reject("AUTH_ERROR", exception.toString())
        }
      }
    )


  }

//  @ReactMethod
//  fun initAuthentication(promise: Promise){
//    TruvideoSdk.initAuthentication(object : TruvideoSdkCallback<Unit>{
//      override fun onComplete(result: Unit) {
//        promise.resolve("Init Successful")
//      }
//
//      override fun onError(exception: TruvideoSdkException) {
//        promise.reject(exception.toString())
//      }
//    })
//
//  }

  // Authentication function
  suspend fun authenticate(apiKey: String, secretKey: String,extenalId : String, promise: Promise) {
    try {
      // Check if user is authenticated
      val isAuthenticated = TruvideoSdk.isAuthenticated
      // Check if authentication token has expired
//      val isAuthenticationExpired = TruvideoSdk.isAuthenticationExpired()
      if (!isAuthenticated) {
        // get API key and secret key
        // generate payload for authentication
        val payload = TruvideoSdk.generatePayload()
        // generate SHA-256 hash of payload with signature as secret key
        val signature = toSha256String(secretKey, payload)
        // Authenticate user
        TruvideoSdk.authenticate(
          apiKey = apiKey,
          payload = payload,
          signature = signature!!,
          externalId = extenalId
        )
      }
      // If user is authenticated successfully
//      TruvideoSdk.initAuthentication()
      promise.resolve("Authentication Successful")
      // Authentication ready
      // Truvideo SDK its ready to be used
    } catch (exception: Exception) {
      promise.resolve(exception)
      exception.printStackTrace()
      // Handle error
    }
  }

  // encoding function to generate SHA-256 hash
  fun toSha256String(secret: String, payload: String): String? {
    return try {
      // getting instance of Message Authentication Code
      val hmacSha256 = Mac.getInstance("HmacSHA256")
      //secretKey
      val secretKey = SecretKeySpec(secret.toByteArray(), "HmacSHA256")
      hmacSha256.init(secretKey)
      val macData = hmacSha256.doFinal(payload.toByteArray())
      // Convert byte array to hex string
      val hexString = StringBuilder()
      for (b in macData) {
        val hex = Integer.toHexString(0xff and b.toInt())
        if (hex.length == 1) {
          hexString.append('0')
        }
        hexString.append(hex)
      }
      hexString.toString() //return encoded string
    } catch (e: NoSuchAlgorithmException) {
      e.printStackTrace()
      null
    } catch (e: InvalidKeyException) {
      e.printStackTrace()
      null
    }
  }

  // Logout function
//  @ReactMethod
//  fun clearAuthentication(promise: Promise) {
//    TruvideoSdk.clearAuthentication()
//    promise.resolve("Logout Successful")
//  }

  @ReactMethod
  fun clearAuthentication(promise: Promise) {
    suspend {
      TruvideoSdk.clearAuthentication()
    }.startCoroutine(
      object : Continuation<Unit> {
        override val context = EmptyCoroutineContext
        override fun resumeWith(result: kotlin.Result<Unit>) {
          result
            .onSuccess {
              promise.resolve("Logout Successful")
            }
            .onFailure { exception ->
              promise.reject("CLEAR_AUTHENTICATION_ERROR", exception.toString())
            }
        }
      }
    )
  }

// generate OTP

  @ReactMethod
  fun generateOtp(
    baseUrl: String,
    apiKey: String,
    secret: String,
    externalId: String,
    promise: Promise
  ) {
    scope.launch(Dispatchers.IO) {
      try {
        if (apiKey.isBlank()) throw IllegalArgumentException("apiKey cannot be empty")
        if (secret.isBlank()) throw IllegalArgumentException("secret cannot be empty")
        if (externalId.isBlank()) throw IllegalArgumentException("externalId cannot be empty")

        val cleanBaseUrl = baseUrl.trimEnd('/')
        val endpoint = "$cleanBaseUrl/api/v1/auth/otp/generate"

        val body = JSONObject()
          .put("externalId", externalId)
          .toString()

        val signature = toSha256String(secret, body)
          ?: throw IllegalStateException("Failed to generate request signature")

        val connection = (URL(endpoint).openConnection() as HttpURLConnection).apply {
          requestMethod = "POST"
          connectTimeout = 15_000
          readTimeout = 15_000
          doOutput = true

          setRequestProperty("Content-Type", "application/json")
          setRequestProperty("x-authentication-api-key", apiKey)
          setRequestProperty("x-authentication-signature", signature)
        }

        try {
          connection.outputStream.use {
            it.write(body.toByteArray(Charsets.UTF_8))
          }

          val status = connection.responseCode

          val stream = if (status in 200..299) {
            connection.inputStream
          } else {
            connection.errorStream
          }

          val responseText = stream?.use {
            BufferedReader(InputStreamReader(it)).readText()
          }.orEmpty()

          if (status !in 200..299) {
            val msg = runCatching {
              JSONObject(responseText).optString("message")
                .ifBlank { JSONObject(responseText).optString("detail") }
            }.getOrDefault("")

            throw IllegalStateException(
              if (msg.isNotBlank()) {
                "OTP generate failed ($status): $msg"
              } else {
                "OTP generate failed with status $status"
              }
            )
          }

          val otp = runCatching {
            JSONObject(responseText).optString("otp")
          }.getOrDefault("")

          if (otp.isBlank()) {
            throw IllegalStateException("OTP not found in response")
          }

          withContext(Dispatchers.Main) {
            promise.resolve(otp)
          }

        } finally {
          connection.disconnect()
        }

      } catch (e: Exception) {
        e.printStackTrace()

        withContext(Dispatchers.Main) {
          promise.reject("OTP_GENERATE_ERROR", e.message, e)
        }
      }
    }
  }

  // authenticate otp

  @ReactMethod
  fun authenticateWithOtp(
    otp: String,
    promise: Promise
  ) {
    scope.launch(Dispatchers.IO) {
      try {
        if (otp.isBlank()) {
          throw IllegalArgumentException("OTP cannot be empty")
        }

        // Call suspend SDK function
        TruvideoSdk.authenticate(otp)

        // Wait until SDK is fully ready
        TruvideoSdk.waitAuthReady()

        withContext(Dispatchers.Main) {
          promise.resolve("OTP Authentication Successful")
        }

      } catch (e: Exception) {
        e.printStackTrace()

        withContext(Dispatchers.Main) {
          promise.reject("OTP_AUTH_ERROR", e.message, e)
        }
      }
    }
  }

  companion object {
    const val NAME = "TruVideoReactCoreSdk"
  }
}
