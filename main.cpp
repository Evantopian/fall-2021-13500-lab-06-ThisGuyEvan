/*
Author: Evan Huang
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 06

 - Displaying all functions in main from Task A-D from Lab 06.
*/


#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main(){
  
  std::cout << "\nCeasar:\n";
  std::cout << "\tCypher: A Light-Year Apart (5) -> " << encryptCaesar("A Light-Year Apart", 20) << "\n";
  std::cout << "\tCypher: Hello, World! (10) -> " << encryptCaesar("Hello, World!", 10) << "\n";  
  std::cout << "\tCypher: Evan Huang >:D (2) -> " << encryptCaesar("Evan Huang >:D", 2) << "\n";  
  std::cout << "\tCypher: 12345@gmail.com (14) -> " << encryptCaesar("12345@gmail.com", 14) << "\n\n\n";


  std::cout << "\tDecrypher: \"Rovvy, Gybvn!\" (10) -> " << decryptCaesar("Rovvy, Gybvn!", 10) << "\n";
  std::cout << "\tDecrypher: \"rand%../\" (3) -> " << decryptCaesar("rand%../", 3) << "\n";
  std::cout << "\tDecrypher: \"1+3+2 x 5\" (6) -> " << decryptCaesar("1+3+2 x 5", 6) << "\n";
  std::cout << "\tDecrypher: \"!\" (10) -> " << decryptCaesar("Rovvy, Gybvn!", 10) << "\n";

  std::cout << "\nVigenere:\n";
  std::cout << "\tCypher: Hello, World! (cake) -> " << encryptVigenere("Hello, World!", "cake") << "\n";
  std::cout << "\tCypher: Vigenere (cpp) -> " << encryptVigenere("Vigenere", "cpp") << "\n";
  std::cout << "\tCypher: Hunter College (daedalus) -> " << encryptVigenere("Hunter College", "daedalus") << "\n";
  std::cout << "\tCypher: {-=+=-} (bob) -> " << encryptVigenere("{-=+=-}", "bob") << "\n";
  std::cout << "\tCypher: 499293498 (jeffery) -> " << encryptVigenere("499293498", "jeffery") << "\n";
  std::cout << "\tCypher: {10/10/2021} October! (evan) -> " << encryptVigenere("{10/10/2021} October!", "evan") << "\n\n\n";
  

  std::cout << "\tDecrypher: \"Jevpq, Wyvnd!\" (cake) -> " << decryptVigenere("Jevpq, Wyvnd!", "cake") << "\n";
  std::cout << "\tDecrypher: \"- . ... - -.-. .- ... .\" (morse) -> " << decryptVigenere("- . ... - -.-. .- ... .", "morse") << "\n";

  
  return 0;
}
