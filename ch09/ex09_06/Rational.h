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
    Rational(int n = 1, int d = 1);
    void add(const Rational&);
    void subtract(const Rational&);
    void multiply(const Rational&);
    void divide(const Rational&);
    std::string toRationalString() const;
    double toDouble() const;
    
private:
    int numerator{0};
    int denominator{0};

    // utility function
    int gcd(int, int);
    void simplify(int, int);
};

#endif
