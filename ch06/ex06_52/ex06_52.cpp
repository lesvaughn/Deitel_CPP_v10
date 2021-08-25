/*
 ***************************************************
 *
 * ex06_52.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.52 (Function Template maximum)
 * Created: Aug 25,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include "maximum.hpp"


int main() {
	std::cout << "Enter two non-equal integers:  ";
	int int1, int2;
	std::cin >> int1 >> int2;
	std::cout << "The maximum value entered was " << maximum(int1, int2) << std::endl;

	std:: cout << "\nEnter two non-equal characters:  ";
	char a, b;
	std::cin >> a >> b;
	std::cout << "The maximum value entered was " << maximum(a, b) << std::endl;

	std::cout << "\nEnter two non-equal floating-point numbers:  ";
	double double1, double2;
	std::cin >> double1 >> double2;
	std::cout << "The maximum value entered was " << maximum(double1, double2) << std::endl;

}
