#include <cctype>
#include <iostream>
#include "ceasar.h"


const std::string alpha{"abcdefghijklmnopqrstuvwxyz"};


char shiftChar(char ch, int rShift){
  int i = 0;

  while (true){
    if (i > alpha.size()){
      return ch;
    }

    if (ch == alpha[i]){
      // if the shift exceeds the size of the array, then cycle the array, else shift normally.
      ch = (rShift+i) > alpha.size() ? alpha[(rShift+i) % alpha.size()] : alpha[rShift+i];
      break;
    }
    i++;
  }
  return ch;
}


std::string encryptCaesar(std::string s, int rShift){
  std::string encrypted = "";

  for (int i = 0; i < s.length(); i++){
    // if uppercase, then run as shiftChar as lowercase and revert, else run as lowercase.
    encrypted += std::isupper(s[i]) ? toupper(shiftChar(tolower(s[i]), rShift)) : shiftChar(s[i], rShift);
  }
  return encrypted;
}


