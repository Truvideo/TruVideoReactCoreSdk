import { NativeModules, Platform } from 'react-native';

const LINKING_ERROR =
  `The package 'truvideo-react-core-sdk' doesn't seem to be linked. Make sure: \n\n` +
  Platform.select({ ios: "- You have run 'pod install'\n", default: '' }) +
  '- You rebuilt the app after installing the package\n' +
  '- You are not using Expo Go\n';

const TruVideoReactCoreSdk = NativeModules.TruVideoReactCoreSdk
  ? NativeModules.TruVideoReactCoreSdk
  : new Proxy(
      {},
      {
        get() {
          throw new Error(LINKING_ERROR);
        },
      }
    );

/**
 * Authenticates the user using the provided API key and secret key.
 *
 * @param {string} apiKey - The API key for authentication.
 * @param {string} secretKey - The secret key for authentication.
 * * @param {string} externalID - The secret key for authentication.
 * @return {Promise<string>} A promise that resolves to the authentication response.
 */
// export function authentication(
//   apiKey: string,
//   secretKey: string,
//   externalId: string
// ): Promise<string> {
//   return TruVideoReactCoreSdk.authentication(apiKey, secretKey, externalId);
// }

export function isAuthenticated(): Promise<boolean> {
  return TruVideoReactCoreSdk.isAuthenticated();
}

export function isAuthenticationExpired(): Promise<boolean> {
  return TruVideoReactCoreSdk.isAuthenticationExpired();
}

export function generatePayload(): Promise<string> {
  return TruVideoReactCoreSdk.generatePayload();
}
export function authenticate(
  apiKey: String,
  payload: String,
  signature: String,
  externalId: String
): Promise<string> {
  return TruVideoReactCoreSdk.authenticate(
    apiKey,
    payload,
    signature,
    externalId
  );
}

export function initAuthentication(): Promise<string> {
  return TruVideoReactCoreSdk.initAuthentication();
}
/**
 * Clears the authentication for the user.
 *
 * @return {Promise<string>} A promise that resolves to the authentication clear response.
 */
export function clearAuthentication(): Promise<string> {
  return TruVideoReactCoreSdk.clearAuthentication();
}
