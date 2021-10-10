#include <cctype>
#include <iostream>
#include "ceasar.h"
#include "vigenere.h"


char lShift(char ch, int shift){
  int index = findIndex(ch);
  if (index != -1)
    ch = index-shift < 0 ? alpha[alpha.size() + (index-shift)] : alpha[index-shift]; 

  return ch;
}


std::string decryptCaesar(std::string s, int shift){
  std::string decrypted = "";
  
  for (int i = 0; i < s.length(); i++)
    decrypted += isupper(s[i]) ? toupper(lShift(tolower(s[i]), shift)) : lShift(s[i], shift); 
  
  return decrypted;
}


std::string decryptVigenere(std::string s, std::string key){
  std::string decrypted = "";
  int k = 1;

  for (int i = 0; i < s.length(); i++){
    if (findIndex(tolower(s[i])) != -1){    
      if (k % (key.length()+1) == 0) k = 1;
      
      if (isupper(s[i])){
        decrypted += toupper(lShift(tolower(s[i]), findIndex(key[k-1]))); 
      }
      else{
        decrypted += lShift(s[i], findIndex(key[k-1]));
      }
      
      k++;    
    }
    else decrypted += s[i];
  }
  return decrypted;
}

