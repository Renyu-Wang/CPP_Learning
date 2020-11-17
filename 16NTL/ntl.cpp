#include <iostream>
#include<cmath>
#include <itpp/itbase.h>
#include <NTL/GF2X.h>



int main(){
    itpp::bvec a = "0 1 0 1";
    int cof1;
    long cof2;

    NTL::GF2X a_pol, g;
    NTL::GF2X l_pol = NTL::GF2X(5,1) + 1;
    a_pol = 0;


    for(int i = 0; i < 4; i++){
        cof1 = a(i);
        cof2 = cof1;
        a_pol += NTL::GF2X(i,cof2);
    }
    std::cout << a_pol << "\n";
    std::cout << l_pol << "\n";
    g = GCD(a_pol, l_pol);
     std::cout << g << "\n";
    return 0;
    
   
}