#include<iostream>
#include <itpp/itbase.h> //source code: https://sourceforge.net/projects/itpp/
                         //install on mac: http://macappstore.org/itpp/

//compile: g++ `itpp-config --cflags` -o ITPP ITPP.cpp `itpp-config --libs`

using namespace itpp;

int main(){
  //Declare vectors and matricies:
  vec a, b, c;
  mat A, B;

  //Use the function linspace to define a vector:// y = linspace(a,b); y = linspace(a,b,n);
  a = linspace(1.0, 2.0, 10);

  //Use a string of values to define a vector:
  b = "0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9 1.0";

  //Add two vectors:
  c = a + b;

  //Print results:
  std::cout << "a = " << a << "\n";
  std::cout << "b = " << b << "\n";
  std::cout << "c = " << c << "\n";

  //Use a string to define a matrix:
  A = "1.0 2.0;3.0 4.0";

  //Calculate the inverse of matrix A:
  B = inv(A);

  //Print results:
  std::cout << "A = " << A << "\n";
  std::cout << "B = " << B << "\n";
}