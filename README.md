# Caesar Cipher Encryption and Decryption in C++

This repository contains C++ code implementing the Caesar cipher encryption and decryption algorithms. The Caesar cipher is a substitution cipher technique where each letter in the plaintext is shifted a certain number of places down or up the alphabet.  

## Features
Encryption: Encrypt plaintext files using the Caesar cipher algorithm with a specified shift value.  
Decryption: Decrypt ciphertext files using the same shift value used for encryption.  
Interactive Interface: Choose between encryption and decryption modes interactively in the console.  
File I/O: Read input from files and write output to files.

## Functions
EncryptChar: Function to encrypt a single character using the Caesar cipher algorithm.  
DecryptChar: Function to decrypt a single character using the Caesar cipher algorithm.  
EncryptFile: Function to encrypt a file using the Caesar cipher algorithm.  
DecryptFile: Function to decrypt a file using the Caesar cipher algorithm.

## Usage

Compile: Compile the source code using a C++ compiler.

Copy code
```bash
g++ caesar_cipher.cpp -o caesar_cipher
```
Run: Run the compiled executable.

```bash
./caesar_cipher
```


Encryption/Decryption: Choose whether to encrypt or decrypt a file and provide the filename when prompted.  

## note
(make sure to add ".txt" after entering the file name )  
## License
This project is licensed under the MIT License. Feel free to use, modify, and distribute the code according to the terms of the license.


