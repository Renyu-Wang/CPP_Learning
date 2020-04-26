#include <iostream>
int main(){

    double tempf = 0;
    double tempc = 0;

    std::cout << "Enter the Fahrenheit temperature: ";
    std::cin >> tempf;

    tempc = (tempf -32)/1.8;

    std::cout << "The Celsius temperature is: " << tempc << "degree.\n";
}