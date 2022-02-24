/*****************************************************************************
 * Rational.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.6 (Rational Class)
 * 
 * Feb 18, 2022
 * lvaughn
 ****************************************************************************/
#include <iostream>
#include <sstream>
#include "Rational.h"

Rational::Rational(int n, int d)
{
    int divisor = gcd(n, d);

    if (divisor > 1) {
        numerator = n / divisor;
        denominator = d / divisor;
    }
}

Rational::add(Rational r1, Rational r2)
{
    
}

std::string Rational::toRationalString() const
{
    std::ostringstream output;
    output << numerator << "/" << denominator;
    return output.str();
}

// helper function
int Rational::gcd(int n, int d)
{
    if (d == 0)
        return n;
    else
        return gcd(d, n % d);
}
