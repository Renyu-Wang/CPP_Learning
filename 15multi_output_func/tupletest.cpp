#include <iostream>
#include <tuple>
////compile with "g++ -std=c++11 tupletest.cpp -o tup" for tuple lib

// Function to return multiple values using references
std::tuple<int, int, char, double> initialize()
{
	return std::make_tuple(10, 20, 'A', 1.2f);
}

// Return multiple values from a function in C++
int main()
{
	int a, b;
	char c;
	double d;

	std::tie(a, b, c, d) = initialize();
	std::cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d;

	return 0;
}