#include <iostream>
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword){
    std::string str;
    for(int i = 0; i < plaintext.length(); i++){
        str += shiftChar(plaintext[i],(int(keyword[i%keyword.length()])-97));
    }
    return str;
}