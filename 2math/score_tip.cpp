/*  
    variables:
    int:     integer
    double: floating-point num
    char:   individual characters
    std::string: sequence characters
    bool:   true/false
    std::vector: vector

    calculations:
    +, -, *, /, %, **, == 

    input: std::cin >> [variable name]

*/
#include<iostream>
int main()
{
    int year = 2019;
    year = 2020;

    int score = 1234*9;
    std::cout << "Score:"<< score << "\n";

    int tip = 0;
    std::cout << "Enter tip amount: ";
    std::cin >> tip;
    std:: cout << "You paid " << tip << " dollars.\n";
}