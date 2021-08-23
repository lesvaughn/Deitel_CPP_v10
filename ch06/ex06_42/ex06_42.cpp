/*
 ***************************************************
 *
 * ex06_42.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.42 (Distance Between Points)
 * 
 * Created: Aug 27,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <cmath>

double distance(double, double, double, double);

int main() {
	std::cout << "Enter the x coordinates of the first point:  ";
	double a1, a2;
	std::cin >> a1 >> a2;

	std::cout << "Enter the y coordinates of the second point:  ";
	double b1, b2;
	std::cin >> b1 >> b2;

	std::cout << "The distance between the points is " << distance(a1, a2, b1, b2) << std::endl;
}

double distance(double x1, double x2, double y1, double y2) {
	return sqrt((x1 - y1) * (x1 - y1) + (x2 - y2) * (x2 - y2));
}