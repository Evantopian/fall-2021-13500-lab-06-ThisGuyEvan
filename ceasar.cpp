#include <iostream>
#include "ceasar.h"
#include "vigenere.h"

const std::string alpha{"abcdefghijklmnopqrstuvwxyz"};

char shiftChar(char ch, int rShift){
    int i = findIndex(ch);
    // if the shift exceeds the size of the array, then cycle the array, else shift normally.
    if (i != -1)
      ch = (rShift+i) > alpha.size() ? alpha[(rShift+i) % alpha.size()] : alpha[rShift+i];
  
  return ch;
}


std::string encryptCaesar(std::string s, int rShift){
  std::string encrypted = "";

  for (int i = 0; i < s.length(); i++){
    // if uppercase, then run shiftChar as lowercase then revert, else run as lowercase.
    encrypted += std::isupper(s[i]) ? toupper(shiftChar(tolower(s[i]), rShift)) : shiftChar(s[i], rShift);
  }
  return encrypted;
}

