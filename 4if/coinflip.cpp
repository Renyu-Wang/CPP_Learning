/*
    relation operators:
    ==, !=, <, >, >=, <=

    If statement:
    if (condition) {}
    else if (consition) {}
    else {}
*/
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
    /* 
      Create a number that's 0 or 9:
        srand (time(NULL));
        int	i = rand() % 10;
      Create a number that's 0 or 1:
    */
    srand (time(NULL));
    int	coin = rand() % 2;
  
    // If number is 0: Heads
    // If it is not 0: Tails
    if (coin == 0) {
    std::cout << "Heads\n";
  }
	else {
    std::cout << "Tails\n";
  }
}
    