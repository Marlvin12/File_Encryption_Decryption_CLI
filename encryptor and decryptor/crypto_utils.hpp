//
//  crypto_utils.hpp
//  encryptor and decryptor
//
//  Created by Marlvin Goremusandu on 5/10/23.
//

#ifndef crypto_utils_hpp
#define crypto_utils_hpp

#include <stdio.h>
#pragma once

#include <string>
#include <crypto_utils.h>

bool encrypt_file(const std::string& input_filename, const std::string& output_filename, const std::string& key);
bool decrypt_file(const std::string& input_filename, const std::string& output_filename, const std::string& key);

#endif
