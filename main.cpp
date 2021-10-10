#include <iostream>
#include "ceasar.h"
#include "vigenere.h"
#include "decrypt.h"

int main(){
  
  std::cout << "\nCeasar:\n";
  std::cout << "Cypher: A Light-Year Apart (5) -> " << encryptCaesar("A Light-Year Apart", 5) << "\n";
  std::cout << "Cypher: Hello, World! (10) -> " << encryptCaesar("Hello, World!", 10) << "\n";  
  std::cout << "Decrypher: \"Rovvy, Gybvn!\" (10) -> " << decryptCaesar("Rovvy, Gybvn!", 10) << "\n";

  std::cout << "\nVigenere:\n";
  std::cout << "Cypher: Hello, World! (cake) -> " << encryptVigenere("Hello, World!", "cake") << "\n";
  std::cout << "Decrypher: \"Jevpq, Wyvnd!\" (cake) -> " << decryptVigenere("Jevpq, Wyvnd!", "cake") << "\n";

  return 0;
}
