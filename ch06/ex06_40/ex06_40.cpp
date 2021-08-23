/*
 ***************************************************
 *
 * ex06_40.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.40 (Visualizing Recursion)
 * 
 * Created: Aug 23,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>

unsigned long factorial(unsigned long);

int main() {

	for (unsigned int counter{0}; counter <= 10; ++counter) {
		std::cout << std::setw(2) << counter << "! = \n" << factorial(counter) << "\n" << std::endl;
	}
}

unsigned long factorial(unsigned long number) {
	if (number <= 1) {
		return 1;
	}
	else {
		std::cout << std::setw(5) << number << " * " << number - 1 <<std::endl;
		return number * factorial(number - 1);
	}
}
