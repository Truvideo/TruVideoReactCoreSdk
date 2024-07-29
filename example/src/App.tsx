import { useEffect } from 'react';
import { StyleSheet, View, Button } from 'react-native';
import { authetication, clearAuthentication } from 'truvideo-react-core-sdk';

export default function App() {
  useEffect(() => {
    authetication('EPhPPsbv7e', '9lHCnkfeLl')
      .then((result) => {
        console.log('result', result);
      })
      .catch((error) => {
        console.log('error', error);
      });
  }, []);

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
        accessibilityLabel="Clear authetication function will called here"
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
