import TruvideoSdk // Import the Truvideo SDK
import Foundation
import CommonCrypto

@objc(TruVideoReactCoreSdk)
class TruVideoReactCoreSdk: NSObject {

    @objc(authentication:withSecretKey:withResolver:withRejecter:)
      func authentication(apiKey: String, secretKey: String, resolve:RCTPromiseResolveBlock,reject:RCTPromiseRejectBlock) -> Void {
            Task{
                self.authenticate(apiKey: apiKey, secretKey: secretKey)
            }
            resolve("Success")
      }
        
        func authenticate(apiKey: String, secretKey: String){
               /// Verify if the user is already authenticated or if the session is active or expired..
               if(!Constant.isAuthenticated || Constant.isAuthenticationExpired){
                   
                   let payload = TruvideoSdk.generatePayload()
                   /// The payload string is transformed into an encrypted string using the SHA256 algorithm.
                   let signature = payload.toSha256String(using: secretKey)
                   
                   Task(operation: {
                       do{
                           ///   Initialize a session when the user is not authenticated.
                           /// - Parameters:
                           ///     - API_Key : Provided by TruVideo team
                           ///     - Payload : generated by sdk TruvideoSdk.generatePayload() every time you have to create new payload
                           ///     - Signature: encrypted string payload using the SHA256 algorithm with "secret key"
                           ///     - Secret_Key: secret key is also provided by TruVideo team
                           try await TruvideoSdk.authenticate(apiKey: apiKey, payload: payload, signature: signature)
                           try await TruvideoSdk.initAuthentication()
                       }catch {
                       }
                   })
               }else{
                   Task(operation: {
                       do{
                           /// Initialize a session when the user already authenticated.
                           try await TruvideoSdk.initAuthentication()
                       }catch {
                       }
                   })
               }
           }

     /// Clears the authentication for the user.
     @objc(clearAuthentication:withRejecter:)
      func clearAuthentication(resolve:RCTPromiseResolveBlock,reject:RCTPromiseRejectBlock) -> Void {
            Task{
                  TruvideoSdk.clearAuthentication()
            }
            resolve("Session Finished..........")
      }
}

class Constant: NSObject{
   static let isAuthenticated = TruvideoSdk.isAuthenticated
   static let isAuthenticationExpired = TruvideoSdk.isAuthenticationExpired
}

extension String {
    /// Calculates the HMAC-SHA256 value for a given message using a key.
    ///
    /// - Parameters:
    ///    - msg: The message for which the HMAC will be calculated.
    ///    - key: The secret key used to calculate the HMAC.
    /// - Returns: The calculated HMAC-SHA256 value in hexadecimal format.
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
        
        return macData.map { String(format: "%02x", $0) }
            .joined()
    }
}
