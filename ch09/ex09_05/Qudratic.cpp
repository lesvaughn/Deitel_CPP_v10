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

double Quadratic::add(Quadratic quadratic) const
{
    
}

std::string toString()
{
    std::cout << a << 
}