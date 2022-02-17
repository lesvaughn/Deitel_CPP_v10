/****************************************************************************
 * Quadratic.h
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.5 (Quadratic Equation Class)
 * 
 * Feb 17, 2022
 * lvaughn
 ****************************************************************************/
#include <string>

#ifndef QUADRATIC_H
#define QUADRATIC_H

class Quadratic {
public:
    Quadratic(double aVal, double bVal, double cVal);
    double add(Quadratic quadratic) const;
    double subtract(Quadratic quadratic) const;
    std::string toString() const;
    double solve();

private:
    double a{1};
    double b{0};
    double c{0};
    char variable{'x'};
};

#endif
