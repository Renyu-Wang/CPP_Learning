#include <iostream>
#include <vector> //header

int main() {
    //create a vector: std::vector<type> name;
    std::vector<double> subway_adult(3);
    std::vector<double> subway_child = { 400, 600, 750 };//use g++ -std=c++11 name.cpp to compile

     //output one element of a vector;
     std::cout << subway_child[1] << "\n";
    
     //The C++ string class is part of the std namespace, so we have to write std::string for strings.
     std::vector<std::string> dna = {"ATG", "ACG"};
     //add one element to the end of a vector;
     dna.push_back("GTG");
     dna.push_back("CTG");
     //remove the last element of a vector(.pop_back() has no return value);
     dna.pop_back();
     //show the size of a vector;
     std::cout << dna.size() << "\n";


     std::vector<double> delivery_order;
  
     delivery_order.push_back(8.99);
     delivery_order.push_back(3.75);
     delivery_order.push_back(0.99);
     delivery_order.push_back(5.99);
  
    //Calculate the total using a for loop:
     double total = 0.0;
     for(int i = 0; i < delivery_order.size(); i++){
     total = total + delivery_order[i];
     }
     std::cout << total << "\n";
}
