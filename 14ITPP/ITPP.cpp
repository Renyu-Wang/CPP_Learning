#include<iostream>
#include <itpp/itbase.h> //source code: https://sourceforge.net/projects/itpp/
                         //install on mac: http://macappstore.org/itpp/
//#include<itpp/base/gf2mat.h> http://itpp.sourceforge.net/4.3.1/classitpp_1_1GF2mat.html

//compile: g++ `itpp-config --cflags` -o ITPP ITPP.cpp `itpp-config --libs` 
//for itpp lib

using namespace itpp;

int main(){
  //Declare vectors and matricies:
  vec a, b, c;
  mat A, B;
  mat C(2,2);

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

//zero all the values in C
  C.zeros();

  //Print results:
  std::cout << "A = " << A << "\n";
  std::cout << "B = " << B << "\n";
  std::cout << "C = " << C << "\n";
}