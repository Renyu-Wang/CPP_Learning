#include <iostream>
#include "song.hpp"

int main() {

    //Song ER;
    //constructor
    Song BB("Back to Black","Amy Winehouse");

    //ER.add_title("Electric Relaxation");
    std::cout << BB.get_title() << "\n";

    //ER.add_artist("A Tribe Called Quest");
    std::cout << BB.get_artist() << "\n";

    /*
        destructor:
            the destructor will be called automatically in any of the following scenarios:
                The object moves out of scope.
                The object is explicitly deleted.
                When the program ends.
    */
    
}