# file-encryption-tool-cpp

A simple C++ program that encrypts and decrypts files using the XOR cipher.  
Since XOR is a reversible operation, the same function can be used for both encryption and decryption.

## ✨ Features
- Encrypts or decrypts any file (text or binary).
- Works with user-provided file paths.
- Lightweight and easy to use.
- Demonstrates file I/O operations in C++.

## 🔑 How It Works
The XOR cipher applies a key to every byte of the file:
encrypted_byte = original_byte ^ key

Applying the same key again restores the original content:
decrypted_byte = encrypted_byte ^ key

Notes

- This project is for educational purposes only.

- XOR is not secure for real-world encryption.

- Use it to learn about file handling and simple ciphers in C++.

