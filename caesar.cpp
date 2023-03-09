#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){
    if(!isalpha(c)){
        return c;
    }
    if(isupper(c)){
        return (c - 'A' + rshift) % 26 + 'A';
    }
    else{
        return (c - 'a' + rshift) % 26 + 'a';
    }
}

// Caesar cipher encryption
std::string encryptCaesar(std::string plaintext, int rshift){
    std::string result = "";
    for(int i = 0; i < plaintext.length(); i++){
        result = result + shiftChar(plaintext[i], rshift);
    }
    return result;
}