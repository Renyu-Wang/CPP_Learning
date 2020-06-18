/*
    logical operators:
    and: &&, or: ||, not: !
*/

#include <iostream>

int main() {

    int hunger = true;
    int anger = true;

    if (hunger == true && anger == true) {
        std::cout << "Hangry\n";
    }
   
    int day = 6;

    if (day == 6 || day == 7){
        std::cout << "weekend\n";
    }

    bool logged_in = false;
  
    if (!logged_in){
        std::cout << "Try again\n";
  }

}