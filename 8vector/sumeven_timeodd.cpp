#include<iostream>
#include<vector>

int main(){
  std::vector<int> vect = {2, 4, 3, 6, 1, 9};
  int sum = 0;
  int product = 1;

  for (int i = 0; i < vect.size(); i++){
    if (vect[i] % 2 == 0) {
      sum = sum + vect[i];  
    }
    else {
      product = product * vect[i]; 
    }
  }
std::cout << "Sum of even number is " << sum << "\n";
std::cout << "Product of odd numbers is " << product << "\n";
}