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
