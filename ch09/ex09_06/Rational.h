/*****************************************************************************
 * Rational.h
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.6 (Rational Class)
 * 
 * Feb 18, 2021
 * lvaughn
 *****************************************************************************/


#ifndef RATIONAL_H
#define RATIONAL_H

#include <string>

class Rational {
public:
    Rational(int n, int d);
    void add(Rational r1, Rational r2);
    void subtract(int n, int d);
    void multiply(int n, int d);
    void divide(int n, int d);
    std::string toRationalString() const;
    double toDouble();
    
private:
    int numerator;
    int denominator;

    // utility function
    int gcd(int n, int d);
};

#endif
