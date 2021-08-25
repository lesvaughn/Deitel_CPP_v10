/*
 ***************************************************
 *
 * ex06_49.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.49 (Pass-by-Value vs. Pass-by-reference)
 * Created: Aug 25,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

double tripleByValue(double);
void tripleByReference(double &);


int main() {
	double x = 2.3;

	std::cout << "2.3 tripeled by value is " << tripleByValue(x) << std::endl;

	tripleByReference(x);
	std::cout << "2.3 tripeled by reference is " << x << std::endl;
}

double tripleByValue(double x) {
	return x * x * x;
}

void tripleByReference (double &nbrRef) {
	nbrRef = nbrRef * nbrRef * nbrRef;
}