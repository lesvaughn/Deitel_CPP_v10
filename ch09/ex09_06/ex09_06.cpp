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
    std::cout << "r1 = " << r1.toRationalString();

    Rational r2{1, 4};
    std::cout << "\nr2 = " << r2.toRationalString();

    r1.add(r2);
    std::cout << "\nAfter adding r2 to r1, r1 = " << r1.toRationalString();

    Rational r3(3, 8);
    std::cout << "\n\nr3 = " << r3.toRationalString();
    r1.subtract(r3);
    std::cout << "\nAfter subtracting r3 from r1, r1 = "
        << r1.toRationalString();

    Rational r4(2, 3);
    std::cout << "\n\nr4 = " << r4.toRationalString();
    Rational r5(3, 8);
    std::cout << "\nr5 = " << r5.toRationalString();
   
    r4.multiply(r5);
    std::cout << "\nAfter multiplying r4 and r5, r4 = "
        << r4.toRationalString();

    Rational r6(1, 2);
    std::cout << "\n\nr6 = " << r6.toRationalString();
    r5.divide(r6);
    std::cout << "\nAfter divding r5 by r6, r5 = " << r5.toRationalString();
    std::cout << "\nr5 in floating-point format is " << r5.toDouble()
        << std::endl;

} 