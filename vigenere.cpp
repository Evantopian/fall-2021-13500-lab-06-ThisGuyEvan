#include <cctype>
#include <iostream>
#include "vigenere.h"
#include "ceasar.h"


const std::string alpha{"abcdefghijklmnopqrstuvwxyz"};


// made this function since the built in find function returns 
// massive numbers if  the value is not in range.
int findIndex(char ch){
  for (int i = 0; i < alpha.size(); i++){
    if (ch == alpha[i]){
      return i;
    }
  }
  return -1;
}


std::string encryptVigenere(std::string txt, std::string keyword){
  std::string encrypted = "";
  int k = 1;
  
  for (int i = 0; i < txt.length()+1; i++){
    
    if (findIndex(tolower(txt[i])) != -1){
      if (k % (keyword.length()+1) == 0){
        k = 1;
      }

      if (isupper(txt[i])){
        encrypted += toupper(shiftChar(tolower(txt[i]), findIndex(keyword[k-1])));
      }
      else{
        encrypted += shiftChar(txt[i], findIndex(keyword[k-1]));
      }

      k++;  
    }
    else{
      encrypted += txt[i];
    }
  }
  return encrypted;
}

