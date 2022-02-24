/*****************************************************************************
 * Rational.h
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.6
 * 
 * Feb 18, 2022
 * lvaughn
 *****************************************************************************/
#include <iostream>
#include "Rational.h"

int main()
{
    Rational r1{4, 6};

    std::cout << r1.toRationalString() << std::endl;
}