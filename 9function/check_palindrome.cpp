#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  int l = text.length();
  std::string invers="";
  for (int i = l-1; i >= 0; i--){
  invers = invers + text[i]; 
    }
  if(invers == text){
    return true;
  }
  else{
    return false;
  }
}  

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}