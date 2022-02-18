/****************************************************************************
 * Quadratic.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.5 (Quadratic Equations Class)
 * 
 * Feb 17, 2022
 * lvaughn
 ****************************************************************************/
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include "Quadratic.h"

Quadratic::Quadratic(double aVal, double bVal, double cVal) 
    : b{bVal}, c{cVal} {

    if (aVal == 0) {
        a = 1;
    }
    else {
        a = aVal;
    }
}

void Quadratic::solve() const
{
    double discrimant = b * b - 4 * a * c;

    if (discrimant <= 0) {
        std::cout << "No real roots." << std::endl;
    }
    else {
        double root1 = (-b + sqrt(discrimant)) / (2 * a);
        double root2 = (-b - sqrt(discrimant)) / (2 * a);

        std::cout << "Root 1:  " << std::fixed << std::setprecision(4) << root1;
        std::cout << "\nRoot 2:  " << root2 << std::endl;
    }
}

void Quadratic::add(Quadratic q)
{
    a += q.a;

    if (a == 0) {
        a = 1;
    }
    b += q.b;
    c += q.c;
}

void Quadratic::subtract(Quadratic q)
{ 
    a -= q.a;

    if (a == 0) {
        a = 1;
    }
    b -= q.b;
    c -= q.c;
}

std::string Quadratic::toString() const
{
    std::ostringstream output;
    output << a << variable << "^2 + " << b << variable << " + " << c << " = 0";

    return output.str();
}