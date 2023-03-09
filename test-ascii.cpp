#include <iostream>
#include <string>

void ascii(std::string str){
    for(int i = 0; i < str.length(); i++){
        char temp = str[i];
        std::cout << temp << " " << int(temp)<< std::endl;
    }
    
}

int main(){
    ascii("Jose is a good man.");
    return 0;
}