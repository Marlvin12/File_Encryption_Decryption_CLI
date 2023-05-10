# File_Encryption_Decryption_CLI

This command-line application is designed for encrypting and decrypting files using symmetric cryptography algorithms like AES (Advanced Encryption Standard) or asymmetric cryptography algorithms like RSA (Rivest–Shamir–Adleman). It leverages the power of C++ and popular libraries like Crypto++ or OpenSSL to provide a secure and efficient solution for file encryption and decryption.

## Benefits

1. **Secure**: This application uses well-known, trusted encryption algorithms like AES and RSA to ensure the security of your data.
2. **Easy-to-use**: The command-line interface is straightforward and easy to use, even for users who are not familiar with cryptography.
3. **Cross-platform**: Written in C++, this application can be compiled and run on various platforms, including Windows, macOS, and Linux.
4. **Flexible**: The application supports both symmetric and asymmetric encryption algorithms, providing flexibility based on your security needs.
5. **Efficient**: C++ and its libraries are known for their performance, making this application suitable for encrypting and decrypting large files.

## Uses

1. **Personal file security**: Protect sensitive files on your computer, such as financial documents or personal photos, by encrypting them before storage.
2. **Secure file sharing**: Encrypt files before sharing them with others via email, cloud storage, or other means to ensure that only the intended recipient can access the data.
3. **Data backup**: Encrypt important files before backing them up to an external drive or cloud storage service, adding an extra layer of security to your data.
4. **Software distribution**: Encrypt proprietary software or other digital products before distributing them to customers, ensuring that only authorized users can access the content.
5. **Secure communication**: Encrypt messages or other forms of communication before transmission, ensuring that only the intended recipient can decrypt and read the content.

## Installation & Usage

1. Install the required libraries, such as Crypto++ or OpenSSL, depending on the implementation you are using.
2. Compile the application using a C++ compiler (e.g., g++, clang++, or Visual Studio).
3. Run the application with the appropriate command-line arguments:

```
Usage: <executable_name> <encrypt/decrypt> <input_file> <output_file> <key>
```

Example:

```
./file_crypto encrypt input.txt encrypted_output.bin mysecretpassword
./file_crypto decrypt encrypted_output.bin decrypted_output.txt mysecretpassword
```

## Contributing

Contributions to improve the application or add additional features are welcome. Please submit a pull request or open an issue to discuss your ideas.
