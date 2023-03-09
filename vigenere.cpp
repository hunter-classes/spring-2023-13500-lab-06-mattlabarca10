#include <iostream>
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword){
    std::string str;
    for(int i = 0; i < plaintext.length(); i++){
        str += shiftChar(keyword[i],int(keyword[i%4]));
    }
    return str;
}