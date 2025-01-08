import { useEffect } from 'react';
import { StyleSheet, View, Button } from 'react-native';
import { isAuthenticated, clearAuthentication, generatePayload, isAuthenticationExpired, authenticate, initAuthentication } from 'truvideo-react-core-sdk';
import QuickCrypto from 'react-native-quick-crypto';

export default function App() {
  useEffect(() => {
    authFunc();
  }, []);

  const authFunc = async () => {
    try {
      const isAuth = await isAuthenticated();
      console.log('isAuth', isAuth);
      // Check if authentication token has expired
      const isAuthExpired = await isAuthenticationExpired();
      console.log('isAuthExpired', isAuthExpired);
      //generate payload for authentication
      const payload = await generatePayload();
      const apiKey = "EPhPPsbv7e";
      const signature = "9lHCnkfeLl";
      const sha256 = await toSha256String(signature, payload);
      // Authenticate user
      if (!isAuth || isAuthExpired) {
        await authenticate(apiKey, payload, sha256, '');
      }
      // If user is authenticated successfully
      const initAuth =  await initAuthentication();
      console.log('initAuth', initAuth);
    } catch (error) {
      console.log('error', error);
    }
  };

  const toSha256String = (signature: any, payload: any) => {
    try {
      // Create HMAC using 'sha256' and the provided signature as the key
      const hmac = QuickCrypto.createHmac('sha256', signature);
      // Update the HMAC with the payload
      hmac.update(payload);
      // Generate the HMAC digest and convert it to a hex string
      const hash = hmac.digest('hex');
      return hash;
    } catch (error) {
      console.error('Error generating SHA256 string:', error);
      return '';
    }
  };

  const logOut = () => {
    clearAuthentication()
      .then((result) => {
        console.log('result', result);
      })
      .catch((error) => {
        console.log('error', error);
      });
  };

  return (
    <View style={styles.container}>
      <Button
        onPress={logOut}
        title="Logout..."
        color="#eb4034"
        accessibilityLabel="Clear authentication function will called here"
      />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
  box: {
    width: 60,
    height: 60,
    marginVertical: 20,
  },
});
