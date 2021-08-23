/*
 ***************************************************
 *
 * ex06_37.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.37 (Fibonnacci Series:  Iterative Solution)
 * 
 * Created: Aug 23,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

unsigned long fibonnaci(unsigned long);

int main() {
	for (unsigned int counter{0}; counter <= 10; ++counter) {
		std::cout << "fibonnacci(" << counter << ") = " << fibonnaci(counter) << std::endl;
	}
	std::cout << "\nfibonnacci(20) = " << fibonnaci(20) << std::endl;
	std::cout << "fibonnacci(30) = " << fibonnaci(30) << std::endl;
	std::cout << "fibonnacci(35) = " << fibonnaci(35) << std::endl;

}

unsigned long fibonnaci(unsigned long number) {
	unsigned long fib;
	unsigned long prevFib;

	if (number == 0) {
		return 0;
	}
	else if (number == 1) {
		return 1;
	}
	else {
		prevFib = 0;
		fib = 1;

		for (unsigned int i{2}; i <= number; ++i) {
			int temp = fib;
			fib += prevFib;
			prevFib = temp;
		}
	}

	return fib;
}