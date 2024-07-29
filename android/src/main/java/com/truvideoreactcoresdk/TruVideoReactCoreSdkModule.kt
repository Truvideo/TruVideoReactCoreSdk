package com.truvideoreactcoresdk

import com.facebook.react.bridge.ReactApplicationContext
import com.facebook.react.bridge.ReactContextBaseJavaModule
import com.facebook.react.bridge.ReactMethod
import com.facebook.react.bridge.Promise
import com.truvideo.sdk.core.TruvideoSdk
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import java.security.InvalidKeyException
import java.security.NoSuchAlgorithmException
import javax.crypto.Mac
import javax.crypto.spec.SecretKeySpec

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
  @ReactMethod
  fun isAuthenticationExpired(promise: Promise){
    promise.resolve(TruvideoSdk.isAuthenticationExpired)
  }
  @ReactMethod
  fun authetication(apiKey : String , secretKey : String, promise: Promise) {
    scope.launch {
      authenticate(apiKey, secretKey, promise)
    }
  }

  // Authentication function
  suspend fun authenticate(apiKey: String, secretKey: String, promise: Promise) {
    try {
      // Check if user is authenticated
      val isAuthenticated = TruvideoSdk.isAuthenticated
      // Check if authentication token has expired
      val isAuthenticationExpired = TruvideoSdk.isAuthenticationExpired
      if (!isAuthenticated || isAuthenticationExpired) {
        // get API key and secret key
        // generate payload for authentication
        val payload = TruvideoSdk.generatePayload()
        // generate SHA-256 hash of payload with signature as secret key
        val signature = toSha256String(secretKey, payload)
        // Authenticate user
        TruvideoSdk.authenticate(
          apiKey = apiKey,
          payload = payload,
          signature = signature!!
        )
      }
      // If user is authenticated successfully
      TruvideoSdk.initAuthentication()
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
  @ReactMethod
  fun clearAuthentication(promise: Promise) {
    TruvideoSdk.clearAuthentication()
    promise.resolve("Logout Successful")
  }

  companion object {
    const val NAME = "TruVideoReactCoreSdk"
  }
}
