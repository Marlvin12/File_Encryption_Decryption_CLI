#include <iostream>
#include "crypto_utils.h"

int main(int argc, char* argv[]) {
    if (argc != 5) {
        std::cout << "Usage: " << argv[0] << " <encrypt/decrypt> <input_file> <output_file> <key>" << std::endl;
        return 1;
    }

    std::string operation = argv[1];
    std::string input_filename = argv[2];
    std::string output_filename = argv[3];
    std::string key = argv[4];

    if (operation == "encrypt") {
        if (encrypt_file(input_filename, output_filename, key)) {
            std::cout << "Encryption successful!" << std::endl;
        } else {
            std::cout << "Encryption failed!" << std::endl;
        }
    } else if (operation == "decrypt") {
        if (decrypt_file(input_filename, output_filename, key)) {
            std::cout << "Decryption successful!" << std::endl;
        } else {
            std::cout << "

