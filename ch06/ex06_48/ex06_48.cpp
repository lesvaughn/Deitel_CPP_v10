/*
 ***************************************************
 *
 * ex06_48.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.48 (Circle Area)
 * Created: Aug 25,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <cmath>

inline double circleArea(double x) {
	return M_PI * x * x;
}

int main() {
	std::cout << "Enter the radius of a circle:  ";
	double radius;
	std::cin >> radius;

	std::cout << "Ther area fo the circle is " << circleArea(radius) << std::endl;
}
