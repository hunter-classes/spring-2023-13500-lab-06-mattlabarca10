#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "decrypt.h"
#include "vigenere.h"

TEST_CASE("Shift Character") {
    CHECK(shiftChar('a',5) == 'f');
    CHECK(shiftChar('A',10) == 'K');
    CHECK(shiftChar('.',20) == '.');
}

TEST_CASE("Encrypt Caesar") {
    CHECK(encryptCaesar("Hello, world!",3) == "Khoor, zruog!");
    CHECK(encryptCaesar("Jose is a good man.",9) == "Sxbn rb j pxxm vjw.");
    CHECK(encryptCaesar(" p%3 == a ", 7) == " w%3 == h ");
}

TEST_CASE("Encrypt Vigenere") {
    CHECK(encryptVigenere("Hello, world!","cake") == "Jevpq, aqrvh!");
    CHECK(encryptVigenere("Jose is a good man.","mighty") == "Vwyl ge g zmal ttl.");
    CHECK(encryptVigenere(" p%3 == a ", "man") == " p%3 == n ");
}

TEST_CASE("Decrypt Caesar") {
    CHECK(decryptCaesar("Khoor, zruog!",3) == "Hello, world!");
    CHECK(decryptCaesar("Sxbn rb j pxxm vjw.",9) == "Jose is a good man.");
    CHECK(decryptCaesar(" w%3 == h ", 7) == " p%3 == a ");
}

TEST_CASE("Decrypt Vigenere") {
    CHECK(decryptVigenere("Jevpq, aqrvh!","cake") == "Hello, world!");
    CHECK(decryptVigenere("Vwyl ge g zmal ttl.","mighty") == "Jose is a good man.");
    CHECK(decryptVigenere(" p%3 == n ", "man") == " p%3 == a ");
}
