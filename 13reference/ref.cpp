/*
    Two things to note about references:
        Anything we do to the reference also happens to the original.   
        Aliases cannot be changed to alias something else.
*/

//pass-by-reference: passing parameters to a function by using references

#include <iostream>
void swap_num_ref(int &i, int &j) {

    int temp = i;
    i = j;
    j = temp;

}

void swap_num(int i, int j) {

    int temp = i;
    i = j;
    j = temp;

}

int main() {

    int a = 100;
    int b = 200;
    // define constant
    double const pi = 3.14

    swap_num(a, b);

    std::cout << "A is " << a << "\n";
    std::cout << "B is " << b << "\n";

    swap_num_ref(a, b);
  
    std::cout << "A is " << a << "\n";
    std::cout << "B is " << b << "\n";

    //show address of object in memory
    std::cout << &a << "\n";
    //pointer: stores a memory address
    int gum = 8;
    int* ptr = &gum;
    //Dereference: obtain the value pointed to by the pointer
    int gum2 = *ptr;
    //an empty pointer
    int* ptr = nullptr;//NULL

}