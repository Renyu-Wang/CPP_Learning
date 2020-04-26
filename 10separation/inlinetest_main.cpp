#include <iostream>
#include <chrono>//clock time in milliseconds

#include "inlinetest_func.hpp"

int main() {
  
    // Measure time taken for goodnight1():
  
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
    
    std::cout << goodnight1("tulip");
  
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> time_span = end - start;

    // Print time taken for goodnight1():
    std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";
  
    start = std::chrono::high_resolution_clock::now();
    std::cout << goodnight2("tulip");
    end = std::chrono::high_resolution_clock::now();
    time_span = end - start;
    std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";
  
}