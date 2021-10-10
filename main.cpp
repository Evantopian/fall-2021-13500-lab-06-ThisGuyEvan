#include <iostream>
#include "ceasar.h"
#include "vigenere.h"

int main(){
  
  std::cout << "\nTask B: Ceasar \n";
  std::cout << "A Light-Year Apart (5) -> " << encryptCaesar("A Light-Year Apart", 5) << "\n";
  std::cout << "Hello, World! (10) -> " << encryptCaesar("Hello, World!", 10) << "\n";
  

  std::cout << "\nTask C: Vigenere \n";
  std::cout << "Hello, World! (Cake) -> " << encryptVigenere("Hello, World!", "cake");

  return 0;
}
