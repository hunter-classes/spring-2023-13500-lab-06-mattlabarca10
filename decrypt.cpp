#include <iostream>
#include <cctype>
#include <string>
#include "decrypt.h"

char deshiftChar(char c, int rshift){
    if(!isalpha(c)){
        return c;
    }
    if(isupper(c)){
        return (c - 'A' +26 - rshift) % 26 + 'A';
    }
    else{
        return (c - 'a' + 26 - rshift) % 26 + 'a';
    }
}

std::string decryptCaesar(std::string ciphertext, int rshift){
    std::string result = "";
    for(int i = 0; i < ciphertext.length(); i++){
        result = result + deshiftChar(ciphertext[i], rshift);
    }
    return result;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
    std::string str;
    for(int i = 0; i < ciphertext.length(); i++){
        str += deshiftChar(ciphertext[i],(int(keyword[i%keyword.length()])-97));
    }
    return str;
}

