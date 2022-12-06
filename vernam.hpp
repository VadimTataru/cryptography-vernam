//
//  vernam.hpp
//  vernam
//
//  Created by Татару on 06.12.2022.
//

#ifndef vernam_hpp
#define vernam_hpp

char* get_message();

char* get_key(int size);

char* encrypt(char *message, char *key);

#endif /* vernam_hpp */