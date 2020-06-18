#include <iostream>
#include <cmath>
#include <vector>

/*
    define a function:
    return_type function_name( any, parameters, you, have ) {
        Code block here
        return output_if_there_is_any;
    }

    returen_type:
        void: a subroutine, has no return value,
        variable types: double, int, bool, char, std::string, and std::vector
        In a process known as function overloading, 
            you can give multiple C++ functions the same name. 
            Just make sure at least one of these conditions is true:

Each has different type parameters.
Each has a different number of parameters.
    "string1" += "string2" + "string3" => "string1string2string3"
    return xx works like break
*/

//creat a void function
void hello(){
    std::cout << "Hello World!\n";
}
//creat a function calculating average of two numbers
double average(double num1, double num2){
    double ave = (num1+num2)/2;
    return ave;
}

std::vector<int> first_three_multiples(int num){
    std::vector<int> mul = {num, num*2, num*3};
    return mul; 
}



int main(){
    //creat random number between 0 and .. (after % -1)
    srand (time(NULL));
    int i = rand() % 2;
    std::cout << i << "\n";

    //call a void function
    hello();

    //std::cout << some_function();
    std::cout << average(42.0, 24.0) << "\n";

    //show the first three multiples of a number
    for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
    }
}