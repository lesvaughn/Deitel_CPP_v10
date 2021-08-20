/*
 ***************************************************
 *
 * ex06_27.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.27 (Find the Maximum)
 * 
 * Created: Aug 20,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

double maxValue( double, double, double );

int main()
{
	std::cout << "Enter three floating-point numbers:  ";
	double num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;

	std::cout << "The maximun value entered was "
				 << maxValue( num1, num2, num3 ) << std::endl;

}

double maxValue( double x, double y, double z ) {
	double max = x;

	if ( y > max ) {
		max = y;
	}

	if ( z > max ) {
		max = z;
	}

	return max;
}