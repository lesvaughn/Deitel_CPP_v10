/*
 ***************************************************
 *
 * ex06_51.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.51 (Function Template minimum)
 * Created: Aug 25,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include "minimum.hpp"


int main() {
	std::cout << "Enter two non-equal integers:  ";
	int int1, int2;
	std::cin >> int1 >> int2;
	std::cout << "The minimun value entered was " << minimum(int1, int2) << std::endl;

	std:: cout << "\nEnter two non-equal characters:  ";
	char a, b;
	std::cin >> a >> b;
	std::cout << "The minimun value entered was " << minimum(a, b) << std::endl;

	std::cout << "\nEnter two non-equal floating-point numbers:  ";
	double double1, double2;
	std::cin >> double1 >> double2;
	std::cout << "The minimum value entered was " << minimum(double1, double2) << std::endl;

}
