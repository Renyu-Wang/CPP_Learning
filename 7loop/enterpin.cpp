/*  
    while loop: 
    while (condition){
        code;
    }
*/
#include <iostream>

int main() {
  
  int pin = 0;
  int tries = 1;
  
  std::cout << "BANK OF CODECADEMY\n";
  
  std::cout << "Enter your PIN: ";
  std::cin >> pin;
  
  while (pin != 1234 && tries < 3) {
    
    tries++;
    std::cout << "Wrong PIN,trie " << tries << ", try again: ";
    std::cin >> pin;
       
  }
  
  if (pin == 1234) {
    
    std::cout << "PIN accepted!\n";
    std::cout << "You now have access.\n"; 
    
  }
  if (tries == 3){
      std::cout << "Account locked!\n";
  }
}