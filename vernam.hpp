//
//  vernam.hpp
//  vernam
//
//  Created by Татару on 06.12.2022.
//

#ifndef vernam_hpp
#define vernam_hpp
#include <stdlib.h>
#include <cstring>
#include <iostream>

std::string get_message();

char* get_key(int size);

char* encrypt(char *message, char *key, int size);

int print(char *message, int len);

#endif /* vernam_hpp */