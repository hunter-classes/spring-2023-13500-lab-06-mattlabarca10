#include <iostream>
#include <string>
#include "caesar.h"
#include "decrypt.h"
#include "vigenere.h"


int main()
{
  std::cout << shiftChar('a', 5) << std::endl;
  std::cout << encryptCaesar("Hello, world", 7) << std::endl;
  std::cout << decryptCaesar("Khoor, zruog", 3) << std::endl;
  std::cout << encryptVigenere(" p%3 == a ", "man") << std::endl;
  std::cout << decryptVigenere("Jevpq, aqrvh", "cake") << std::endl;
  return 0;
}
