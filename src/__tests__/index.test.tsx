import { NativeModules } from 'react-native';
import {  clearAuthentication } from '../index';

// Mock the NativeModules and TruVideoReactCoreSdk module
jest.mock('react-native', () => ({
  NativeModules: {
    TruVideoReactCoreSdk: {
      authentication: jest.fn(),
      clearAuthentication: jest.fn(),
    },
  },
  Platform: {
    select: jest.fn().mockImplementation((objs) => objs.default),
  },
}));

xdescribe('authentication', () => {
  // const mockApiKey = 'mockApiKey';
  // const mockSecretKey = 'mockSecretKey';
  // const mockResponse = 'mockResponse';

  beforeEach(() => {
    // Clear all instances and calls to constructor and all methods:
    (
      NativeModules.TruVideoReactCoreSdk.authentication as jest.Mock
    ).mockClear();
  });

  // it('calls TruVideoReactCoreSdk.authentication with correct arguments and returns response', async () => {
  //   // Mock implementation of the authentication method
  //   (
  //     NativeModules.TruVideoReactCoreSdk.authentication as jest.Mock
  //   ).mockResolvedValue(mockResponse);

  //   const result = await authentication(mockApiKey, mockSecretKey, '');

  //   // Assert that the mock function was called with the correct arguments
  //   expect(
  //     NativeModules.TruVideoReactCoreSdk.authentication
  //   ).toHaveBeenCalledWith(mockApiKey, mockSecretKey);
  //   // Assert that the result is the mocked response
  //   expect(result).toBe(mockResponse);
  // });

  // it('handles errors correctly', async () => {
  //   const mockError = new Error('mock error');
  //   // Mock implementation of the authentication method to throw an error
  //   (
  //     NativeModules.TruVideoReactCoreSdk.authentication as jest.Mock
  //   ).mockRejectedValue(mockError);

  //   await expect(authentication(mockApiKey, mockSecretKey, '')).rejects.toThrow(
  //     'mock error'
  //   );

  //   // Assert that the mock function was called with the correct arguments
  //   expect(
  //     NativeModules.TruVideoReactCoreSdk.authentication
  //   ).toHaveBeenCalledWith(mockApiKey, mockSecretKey);
  // });
});

describe('clearAuthentication', () => {
  const mockResponse = 'mockClearResponse';

  beforeEach(() => {
    // Clear all instances and calls to constructor and all methods:
    (
      NativeModules.TruVideoReactCoreSdk.clearAuthentication as jest.Mock
    ).mockClear();
  });

  it('calls TruVideoReactCoreSdk.clearAuthentication and returns response', async () => {
    // Mock implementation of the clearAuthentication method
    (
      NativeModules.TruVideoReactCoreSdk.clearAuthentication as jest.Mock
    ).mockResolvedValue(mockResponse);

    const result = await clearAuthentication();

    // Assert that the mock function was called
    expect(
      NativeModules.TruVideoReactCoreSdk.clearAuthentication
    ).toHaveBeenCalled();
    // Assert that the result is the mocked response
    expect(result).toBe(mockResponse);
  });

  it('handles errors correctly', async () => {
    const mockError = new Error('mock error');
    // Mock implementation of the clearAuthentication method to throw an error
    (
      NativeModules.TruVideoReactCoreSdk.clearAuthentication as jest.Mock
    ).mockRejectedValue(mockError);

    await expect(clearAuthentication()).rejects.toThrow('mock error');

    // Assert that the mock function was called
    expect(
      NativeModules.TruVideoReactCoreSdk.clearAuthentication
    ).toHaveBeenCalled();
  });
});
