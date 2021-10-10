#include <iostream>
#include <string>


void ascii_value(std::string s){
  std::string sAscii = "";

  for (int i = 0; i < s.length(); i++){
    std::cout << s[i] << " " << int(s[i]) << "\n"; 
  }
  
}

int main(){
 
  std::string s = "Cat :3 Dog";
  ascii_value(s);
  std::cout << "\n";
  
  s = "Hello World :D";
  ascii_value(s);
  std::cout << std::endl;
  return 0;
}

