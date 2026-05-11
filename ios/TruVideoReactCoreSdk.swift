import TruvideoSdk
import React
import Foundation
import CommonCrypto

@objc(TruVideoReactCoreSdk)
class TruVideoReactCoreSdk: NSObject {

  // MARK: - Private Helper
  private func ensureConfigured() {
    let truVideoOptions = TruVideoOptions()
    TruvideoSdk.configure(with: truVideoOptions)
    print("[TruVideoSDK] SDK configured")
  }

  // MARK: - isAuthenticated
  @objc(isAuthenticated:withRejecter:)
  func isAuthenticated(resolve: @escaping RCTPromiseResolveBlock, reject: @escaping RCTPromiseRejectBlock) -> Void {
    ensureConfigured()
    // FIX: isAuthenticated is a Bool property, not a throwing function
    let isAuthenticated = TruvideoSdk.isAuthenticated
    print("[TruVideoSDK] isAuthenticated:", isAuthenticated)
    resolve(isAuthenticated)
  }

  // MARK: - isAuthenticationExpired
  @objc(isAuthenticationExpired:withRejecter:)
  func isAuthenticationExpired(resolve: RCTPromiseResolveBlock, reject: RCTPromiseRejectBlock) -> Void {
    ensureConfigured()
    do {
      let isExpired = try TruvideoSdk.isAuthenticationExpired()
      print("[TruVideoSDK] isExpired:", isExpired)
      resolve(isExpired)
    } catch let error {
      reject("IS_AUTH_EXPIRED_ERROR", "Failed to check authentication expiration", error)
    }
  }

  // MARK: - generatePayload
  @objc(generatePayload:withRejecter:)
  func generatePayload(resolve: RCTPromiseResolveBlock, reject: RCTPromiseRejectBlock) -> Void {
    ensureConfigured()
    do {
      let payload = try TruvideoSdk.generatePayload()
      print("[TruVideoSDK] generatePayload:", payload)
      resolve(payload)
    } catch let error {
      reject("GENERATE_PAYLOAD_ERROR", "Failed to generate payload", error)
    }
  }

  // MARK: - authenticate
  @objc(authenticate:withPayload:withSignature:withExternalId:withResolver:withRejecter:)
  func authenticate(apiKey: String, payload: String, signature: String, externalId: String, resolve: @escaping RCTPromiseResolveBlock, reject: @escaping RCTPromiseRejectBlock) -> Void {
    ensureConfigured()
    print("[TruVideoSDK] authenticate called with apiKey:", apiKey, "externalId:", externalId)
    Task {
      do {
        try await TruvideoSdk.authenticate(
          apiKey: apiKey,
          payload: payload,
          signature: signature,
          externalId: externalId
        )
        print("[TruVideoSDK] authenticate success")
        DispatchQueue.main.async {
          resolve("Authenticate Success")
        }
      } catch let error {
        print("[TruVideoSDK] authenticate error:", error.localizedDescription)
        DispatchQueue.main.async {
          reject("AUTHENTICATE_ERROR", "Authentication failed: \(error.localizedDescription)", error)
        }
      }
    }
  }

  // MARK: - initAuthentication
  @objc(initAuthentication:withRejecter:)
  func initAuthentication(resolve: @escaping RCTPromiseResolveBlock, reject: @escaping RCTPromiseRejectBlock) -> Void {
    ensureConfigured()
    print("[TruVideoSDK] initAuthentication called")
    Task {
      do {
        try await TruvideoSdk.initAuthentication()
        print("[TruVideoSDK] initAuthentication success")
        DispatchQueue.main.async {
          resolve("Init Authentication Successfully")
        }
      } catch let error {
        print("[TruVideoSDK] initAuthentication error:", error.localizedDescription)
        DispatchQueue.main.async {
          reject("INIT_AUTH_ERROR", "Initialization failed: \(error.localizedDescription)", error)
        }
      }
    }
  }

  // MARK: - clearAuthentication
  // FIX: resolve was called immediately before Task completed
  // FIX: missing catch block on the do, and resolve/reject must be @escaping
  @objc(clearAuthentication:withRejecter:)
  func clearAuthentication(resolve: @escaping RCTPromiseResolveBlock, reject: @escaping RCTPromiseRejectBlock) -> Void {
    ensureConfigured()
    print("[TruVideoSDK] clearAuthentication called")
    Task {
      do {
        // try TruvideoSdk.clearAuthentication()
        try TruvideoSdk.signOut()
        print("[TruVideoSDK] clearAuthentication success")
        DispatchQueue.main.async {
          resolve("Session Finished")
        }
      } catch let error {
        print("[TruVideoSDK] clearAuthentication error:", error.localizedDescription)
        DispatchQueue.main.async {
          reject("CLEAR_AUTH_ERROR", "Clear authentication failed: \(error.localizedDescription)", error)
        }
      }
    }
  }
  
  // MARK: - generateOtp
  @objc(generateOtp:withApiKey:withSecret:withExternalId:withResolver:withRejecter:)
  func generateOtp(
    baseUrl: String,
    apiKey: String,
    secret: String,
    externalId: String,
    resolve: @escaping RCTPromiseResolveBlock,
    reject: @escaping RCTPromiseRejectBlock
  ) -> Void {
    ensureConfigured()

    DispatchQueue.global(qos: .userInitiated).async {
      do {
        if apiKey.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty {
          throw NSError(domain: "OTP_GENERATE_ERROR", code: 400, userInfo: [
            NSLocalizedDescriptionKey: "apiKey cannot be empty"
          ])
        }

        if secret.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty {
          throw NSError(domain: "OTP_GENERATE_ERROR", code: 400, userInfo: [
            NSLocalizedDescriptionKey: "secret cannot be empty"
          ])
        }

        if externalId.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty {
          throw NSError(domain: "OTP_GENERATE_ERROR", code: 400, userInfo: [
            NSLocalizedDescriptionKey: "externalId cannot be empty"
          ])
        }

        let cleanBaseUrl = baseUrl.trimmingCharacters(in: CharacterSet(charactersIn: "/"))
        let endpoint = "\(cleanBaseUrl)/api/v1/auth/otp/generate"

        guard let url = URL(string: endpoint) else {
          throw NSError(domain: "OTP_GENERATE_ERROR", code: 400, userInfo: [
            NSLocalizedDescriptionKey: "Invalid baseUrl"
          ])
        }

        let bodyDict: [String: Any] = [
          "externalId": externalId
        ]

        let bodyData = try JSONSerialization.data(withJSONObject: bodyDict, options: [])
        guard let bodyString = String(data: bodyData, encoding: .utf8) else {
          throw NSError(domain: "OTP_GENERATE_ERROR", code: 500, userInfo: [
            NSLocalizedDescriptionKey: "Failed to create request body"
          ])
        }

        let signature = bodyString.toSha256String(using: secret)

        var request = URLRequest(url: url)
        request.httpMethod = "POST"
        request.timeoutInterval = 15
        request.httpBody = bodyData
        request.setValue("application/json", forHTTPHeaderField: "Content-Type")
        request.setValue(apiKey, forHTTPHeaderField: "x-authentication-api-key")
        request.setValue(signature, forHTTPHeaderField: "x-authentication-signature")

        URLSession.shared.dataTask(with: request) { data, response, error in
          if let error = error {
            DispatchQueue.main.async {
              reject("OTP_GENERATE_ERROR", error.localizedDescription, error)
            }
            return
          }

          let statusCode = (response as? HTTPURLResponse)?.statusCode ?? 0
          let responseData = data ?? Data()

          if statusCode < 200 || statusCode > 299 {
            let message = self.buildOtpGenerateErrorMessage(
              statusCode: statusCode,
              responseData: responseData,
              response: response as? HTTPURLResponse
            )

            DispatchQueue.main.async {
              reject("OTP_GENERATE_ERROR", message, nil)
            }
            return
          }

          guard
            let json = try? JSONSerialization.jsonObject(with: responseData) as? [String: Any],
            let otp = json["otp"] as? String,
            !otp.isEmpty
          else {
            DispatchQueue.main.async {
              reject("OTP_GENERATE_ERROR", "OTP not found in response", nil)
            }
            return
          }

          DispatchQueue.main.async {
            resolve(otp)
          }
        }.resume()

      } catch let error {
        DispatchQueue.main.async {
          reject("OTP_GENERATE_ERROR", error.localizedDescription, error)
        }
      }
    }
  }

  private func buildOtpGenerateErrorMessage(
    statusCode: Int,
    responseData: Data,
    response: HTTPURLResponse?
  ) -> String {
    let trimmedBody = String(data: responseData, encoding: .utf8)?
      .trimmingCharacters(in: .whitespacesAndNewlines) ?? ""

    if let json = try? JSONSerialization.jsonObject(with: responseData) as? [String: Any] {
      if let msg = json["message"] as? String,
         !msg.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty {
        return msg.trimmingCharacters(in: .whitespacesAndNewlines)
      }

      if let detail = json["detail"] as? String,
         !detail.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty {
        return detail.trimmingCharacters(in: .whitespacesAndNewlines)
      }
    }

    let contentType = response?.allHeaderFields["Content-Type"] as? String ?? response?.mimeType ?? ""
    let lowercasedContentType = contentType.lowercased()
    let lowercasedBody = trimmedBody.lowercased()
    let looksLikeHtml =
      lowercasedContentType.contains("text/html") ||
      lowercasedBody.hasPrefix("<!doctype html") ||
      lowercasedBody.hasPrefix("<html")

    if looksLikeHtml {
      if statusCode == 401 || statusCode == 403 || statusCode == 404 {
        return "Invalid API Key"
      }

      return "OTP generation failed. Please verify the API credentials."
    }

    if !trimmedBody.isEmpty, trimmedBody.count <= 180, !trimmedBody.contains("<") {
      return trimmedBody
    }

    return "OTP generation failed. Please verify the API credentials."
  }

  // MARK: - authenticateWithOtp
  @objc(authenticateWithOtp:withResolver:withRejecter:)
  func authenticateWithOtp(
    otp: String,
    resolve: @escaping RCTPromiseResolveBlock,
    reject: @escaping RCTPromiseRejectBlock
  ) -> Void {
    ensureConfigured()

    Task {
      do {
        if otp.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty {
          throw NSError(
            domain: "OTP_AUTH_ERROR",
            code: 400,
            userInfo: [NSLocalizedDescriptionKey: "OTP cannot be empty"]
          )
        }

        try await TruvideoSdk.authenticate(otp: otp)

        DispatchQueue.main.async {
          resolve("OTP Authentication Successful")
        }

      } catch let error {
        print("[TruVideoSDK] OTP auth error:", error.localizedDescription)

        DispatchQueue.main.async {
          reject("OTP_AUTH_ERROR", error.localizedDescription, error)
        }
      }
    }
  }
  
  
}

// MARK: - SHA256 Extension
extension String {
  func toSha256String(using key: String) -> String {
    let hmac256 = CCHmacAlgorithm(kCCHmacAlgSHA256)
    var macData = Data(count: Int(CC_SHA256_DIGEST_LENGTH))

    key.withCString { keyCString in
      withCString { msgCString in
        macData.withUnsafeMutableBytes { macDataBytes in
          guard let keyBytes = UnsafeRawPointer(keyCString)?.assumingMemoryBound(to: UInt8.self),
                let msgBytes = UnsafeRawPointer(msgCString)?.assumingMemoryBound(to: UInt8.self) else {
            return
          }
          CCHmac(
            hmac256,
            keyBytes, Int(strlen(keyCString)),
            msgBytes, Int(strlen(msgCString)),
            macDataBytes.bindMemory(to: UInt8.self).baseAddress
          )
        }
      }
    }

    return macData.map { String(format: "%02x", $0) }.joined()
  }
}


