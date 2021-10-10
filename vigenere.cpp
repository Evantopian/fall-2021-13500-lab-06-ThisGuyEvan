/*
Author: Evan Huang
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 06

  - Functions for Task C, Vigenere's Cipher.
*/

#include <cctype>
#include <iostream>
#include "vigenere.h"
#include "caesar.h"


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


std::string encryptVigenere(std::string txt, std::string key){
  std::string encrypted = "";
  int k = 1;
  
  for (int i = 0; i < txt.length(); i++){
    
    if (findIndex(tolower(txt[i])) != -1){
      if (k % (key.length()+1) == 0){
        k = 1;
      }

      if (isupper(txt[i])){
        encrypted += toupper(shiftChar(tolower(txt[i]), findIndex(key[k-1])));
      }
      else{
        encrypted += shiftChar(txt[i], findIndex(key[k-1]));
      }

      k++;  
    }
    else{
      encrypted += txt[i];
    }
  }
  return encrypted;
}

