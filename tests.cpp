/*
Author: Evan Huang
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 06

  - Test cases for Tasks B-D.
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"


TEST_CASE("Task B: Caesar Encryption:"){
  SUBCASE("Letters & Phrases:"){
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
    CHECK(encryptCaesar("A Light-Year Apart", 20) == "U Fcabn-Syul Ujuln");
  }
  SUBCASE("Special Characters:"){
    CHECK(encryptCaesar("@?#$%^", 7) == "@?#$%^");
    CHECK(encryptCaesar("12345@gmail.com", 14) == "12345@uaowz.qca");
    CHECK(encryptCaesar("Evan Huang >:D", 2) == "Gxcp Jwcpi >:F");

  }
}


TEST_CASE("Vigenere Encryption:"){
  SUBCASE("Letters & Phrases:"){
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("Vigenere", "cpp") == "Xxvgcttt");
    CHECK(encryptVigenere("Hunter College", "daedalus") == "Kurwec Wgolije");
  }
  SUBCASE("Special Characters:"){
    CHECK(encryptVigenere("{-=+=-}", "bob") == "{-=+=-}");
    CHECK(encryptVigenere("499293498", "jeffery") == "499293498");
    CHECK(encryptVigenere("{10/10/2021} October!", "evan") == "{10/10/2021} Sxtbfzr!");
  }
}


TEST_CASE("Task D: Caesar & Vigenere Decryption:"){
  SUBCASE("Letters & Phrases:"){
    CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
    CHECK(decryptCaesar("U Fcabn-Syul Ujuln", 20) == "A Light-Year Apart");

    CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
    CHECK(decryptVigenere("Kurwec Wgolije", "daedalus") == "Hunter College");
  }
  SUBCASE("Special Characters:"){
    CHECK(decryptCaesar("rand%../", 3) == "oxka%../");
    CHECK(decryptCaesar("1+3+2 x 5", 6) == "1+3+2 r 5");

    CHECK(decryptVigenere(";'[;==]'", "random") == ";'[;==]'");
    CHECK(decryptVigenere("- . ... - -.-. .- ... .", "morse") == "- . ... - -.-. .- ... .");
  }
}
