#include <iostream>
#include "func.hpp"

int main() {
  
  std::cout << is_palindrome("noon") << "\n";
  std::cout << tenth_power(4) << "\n";
  std::cout << average(4.0, 7.0) << "\n";
  std::cout << average(4.0) << "\n"; //after default
}
//g++ func.cpp main.cpp -o main

