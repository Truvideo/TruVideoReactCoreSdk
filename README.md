# truvideo-react-core-sdk

none

## Installation

```sh
npm install truvideo-react-core-sdk
```

## Usage


```js
import { authentication, clearAuthentication } from 'truvideo-react-core-sdk';

// ...

const result = await authentication('YOUR-API-KEY', 'YOUR-SECRET-KEY', '')
      .then((result) => {
        console.log('result', result);
      })
      .catch((error) => {
        console.log('error', error);
      });

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
