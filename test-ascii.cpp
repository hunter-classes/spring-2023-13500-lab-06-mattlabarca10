#include <iostream>

void ascii(std::string str){
    std::string result = "";
    for(int i = 0; i < str.length(); i++){
        char temp = str[i];
        std::cout << temp << " " << int(temp)<< std::endl;
    }
    
}

int main(){
    ascii("Jose is a good man.");
    return 0;
}