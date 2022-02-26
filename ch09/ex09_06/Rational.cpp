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
    simplify(n, d);
}

void Rational::add(const Rational& r1)
{
    int num = numerator * r1.denominator + denominator * r1.numerator;
    int denom = denominator * r1.denominator;
    simplify(num, denom);
}

void Rational::subtract(const Rational& r1)
{
    int num = numerator * r1.denominator - denominator * r1.numerator;
    int denom = r1.denominator * denominator;
    simplify(num, denom);
}

void Rational::multiply(const Rational& r1) 
{
    int num = r1.numerator * numerator;
    int denom = r1.denominator * denominator;
    simplify(num, denom);
}

void Rational::divide(const Rational& r1)
{
    int num = numerator * r1.denominator;
    int denom = denominator * r1.numerator;
    simplify(num, denom);
}

std::string Rational::toRationalString() const
{
    std::ostringstream output;
    output << numerator << "/" << denominator;
    return output.str();
}

double Rational::toDouble() const 
{
    return static_cast<double>(numerator) / denominator;
}

// helper function
int Rational::gcd(int n, int d)
{
    if (d == 0)
        return n;
    else
        return gcd(d, n % d);
}

//helper function
void Rational::simplify(int n, int d)
{
    int divisor = gcd(n, d);

    if (divisor != 0) {
        numerator = n / divisor;
        denominator = d / divisor;
    }
}
