/*
 ***************************************************
 *
 * ex06_41.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.41 (Recursive Greatest Common Divisor)
 * 
 * Created: Aug 23,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int gcd(int, int);

int main() {
	std::cout << "Enter two integers that are not equal:  ";
	int int1, int2;
	std::cin >> int1 >> int2;

	int result;

	if (int1 > int2) {
		result = gcd(int1, int2);
	}
	else {
		result = gcd(int2, int1);
	}

	std::cout << "The greatest commond divisor between " << int1 << " and " << int2 << " is "
				 << result << std::endl;

}

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}