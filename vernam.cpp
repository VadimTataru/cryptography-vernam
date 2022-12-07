//
//  vernam.cpp
//  vernam
//
//  Created by Татару on 06.12.2022.
//

#include "vernam.hpp"
#include <stdlib.h>
#include <cstddef>
#include <cstring>
#include <iostream>

std::string get_message() {
    std::string message;
    std::cout << "Enter message to crypt" << std::endl;
    std::cin.sync();
    std::getline(std::cin, message);
    return message.data();
}

char* get_key(int size) {
    char *key = new char[size];
    for (int i = 0; i < size; i++) {
        key[i]=(char)rand()%256;
    }

    return key;
}

char* encrypt(char *message, char *key, int size) {
    char *encrypted_message = new char[size];

    for (int i = 0; i < size; i++) {
        encrypted_message[i]= message[i]^key[i];
    }

    return encrypted_message;
}