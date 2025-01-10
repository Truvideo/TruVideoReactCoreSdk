# truvideo-react-core-sdk

none

## Installation

```sh
npm install https://github.com/Truvideo/TruVideoReactCoreSdk.git
```

## Usage


```js
import { 
    isAuthenticated,
    isAuthenticationExpired,
    generatePayload,
    authenticate,
    initAuthentication,
    clearAuthentication 
} from 'TruVideoReactCoreSdk';

// ...

const authFunc = async () => {
    try {
      const isAuth = await isAuthenticated();
      console.log('isAuth', isAuth);
      // Check if authentication token has expired
      const isAuthExpired = await isAuthenticationExpired();
      console.log('isAuthExpired', isAuthExpired);
      //generate payload for authentication
      const payload = await generatePayload();
      const apiKey = "YOUR-API-KEY";
      const secretKey = "YOUR-SECRET-KEY";
      const signature = await toSha256String(secretKey, payload);
      const externalId = ""
      // Authenticate user
      if (!isAuth || isAuthExpired) {
        await authenticate(apiKey, payload, signature,externalId);
      }
      // If user is authenticated successfully
      const initAuth =  await initAuthentication();
      console.log('initAuth', initAuth);
    } catch (error) {
      console.log('error', error);
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


```


## Contributing

See the [contributing guide](CONTRIBUTING.md) to learn how to contribute to the repository and the development workflow.

## License

MIT

---

Made with [create-react-native-library](https://github.com/callstack/react-native-builder-bob)
