/*
    switch statement:
    switch(variable name){
        case 1:
            code;
            break;
        case 2:
            code;
            break;
        default :
            code;
            break;
    }
    varibales allowed: int, char, short, long, long long, enum
*/

#include <iostream>

int main(){

int number = 3;
  
  switch(number) {
    
    case 1 :
      std::cout << "Bulbusaur\n";
      break;
    case 2 :
      std::cout << "Ivysaur\n";
      break;
    case 3 :
      std::cout << "Venusaur\n";
      break;
    default :
      std::cout << "Unkonwn\n";
      break;
  }
}