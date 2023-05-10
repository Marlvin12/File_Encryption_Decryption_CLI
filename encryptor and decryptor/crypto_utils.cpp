//
//  crypto_utils.cpp
//  encryptor and decryptor
//
//  Created by Marlvin Goremusandu on 5/10/23.
//

#include "crypto_utils.hpp"
#include "crypto_utils.h"
#include <cryptopp/aes.h>
#include <cryptopp/modes.h>
#include <cryptopp/filters.h>
#include <cryptopp/files.h>
#include <cryptopp/hex.h>
#include <cryptopp/osrng.h>
#include <fstream>

bool encrypt_file(const std::string& input_filename, const std::string& output_filename, const std::string& key) {
    try {
        CryptoPP::AES::Encryption aesEncryption(reinterpret_cast<const byte*>(key.data()), CryptoPP::AES::DEFAULT_KEYLENGTH);
        CryptoPP::CBC_Mode_ExternalCipher::Encryption cbcEncryption(aesEncryption, reinterpret_cast<const byte*>(key.data()));
        
        CryptoPP::StreamTransformationFilter stfEncryptor(cbcEncryption, new CryptoPP::FileSink(output_filename.c_str()));
        CryptoPP::FileSource fileSource(input_filename.c_str(), true, new CryptoPP::Redirector(stfEncryptor));
        
        return true;
    } catch (...) {
        return false;
    }
}

bool decrypt_file(const std::string& input_filename, const std::string& output_filename, const std::string& key) {
    try {
        CryptoPP::AES::Decryption aesDecryption(reinterpret_cast<const byte*>(key.data()), CryptoPP::AES::DEFAULT_KEYLENGTH);
        CryptoPP::CBC_Mode_ExternalCipher::Decryption cbcDecryption(aesDecryption, reinterpret_cast<const byte*>(key.data()));

        CryptoPP::StreamTransformationFilter stfDecryptor(cbcDecryption, new CryptoPP::FileSink(output_filename.c_str()));
        CryptoPP::FileSource fileSource(input_filename.c_str(), true, new CryptoPP::Redirector(stfDecryptor));

        return true;
    } catch (...) {
        return false;
    }
}
