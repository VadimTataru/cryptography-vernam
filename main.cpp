//
//  main.cpp
//  vernam
//
//  Created by Татару on 06.12.2022.
//

#include <iostream>
#include "vernam.hpp"
#include <stdlib.h>
#include <cstddef>
#include <cstring>

int main(int argc, char const *argv[])
{
    int len;
    std::string message = get_message();
    len = message.length();
    std::cout << std::endl << "Message is: " << message << "With size " << len;

    char mes[len];
    memcpy(mes, message.data(), len);

    char *key = get_key(len);
    std::cout << std::endl << "Key is: " << key;

    char *encrypted_message = encrypt(mes, key, len);
    std::cout << std::endl << "Encrypted message is: " << encrypted_message;

    char *decrypted_message = encrypt(encrypted_message, key, len);
    std::cout << std::endl << "Decrypted message is: " << decrypted_message;

    std::cout << std::endl << "You can close the program now! Press any key!";
    std::cin.get();
    return 0;
}