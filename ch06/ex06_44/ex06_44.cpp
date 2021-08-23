/*
 ***************************************************
 *
 * ex06_44.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.44 (Modify Mystery function to accept a negatice second argument)
 * 			
 * Created: Aug 27,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int mystery(int, int);

int main() {
	std::cout << "Enter two integers:  ";
	int x{0};
	int y{0};
	std::cin >> x >> y;

	std::cout << "The result is " << mystery(x, y) << std::endl;
}

int mystery(int a, int b) {
	if (b == 0) {
		return 0;
	}

	if ( b > 0) {
		if (1 == b) {
			return a;
		}
		else {
			return a + mystery(a, b - 1);
		}
	}
	else {
		if (-1 == b) {
			return a;
		}
		else {
			return a + mystery(a, b + 1);
		}
	}
}