#include <iostream>

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){
    int ascii = int(c);
    if(ascii >= 65 && ascii <= 90){
        ascii += rshift;
        if(ascii > 90){
            ascii = ascii - 26;
        }
        else if(ascii < 65){
            ascii = ascii + 26;
        }
    }
    else if(ascii >= 97 && ascii <= 122){
        if(ascii > 122){
            ascii = ascii - 26;
        }
        else if(ascii < 97){
            ascii = ascii + 26;
        }
    }
    return char(ascii);
}

// Caesar cipher encryption
std::string encryptCaesar(std::string plaintext, int rshift){
    std::string result = "";
    for(int i = 0; i < plaintext.length(); i++){
        char temp = plaintext[i];
        result += shiftChar(temp, rshift);
    }
    return result;
}