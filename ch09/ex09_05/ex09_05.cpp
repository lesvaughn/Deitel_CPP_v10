/*****************************************************************************
 * ex09_05.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.5 (Quadratic Equation Class)
 * 
 * Feb 17, 2022
 * lvaughn
 ****************************************************************************/
#include <iostream>
#include "Quadratic.h"

int main()
{
    Quadratic q{2, 5, 1};
    std::cout << "First quadratic:  " << q.toString();
    std::cout << "\nRoots are:\n";
    q.solve();

    Quadratic q2{2, 5, 2};
    std::cout << "\nSecond quatratic:  " << q2.toString();
    std::cout << "\nRoots are:\n";
    q2.solve();

    std::cout << "\nAfter adding q2 to q, q is:\n";
    q.add(q2);
    std::cout << q.toString();
    std::cout << "Roots are:\n";
    q.solve();    

    Quadratic q3{4, 6, 9};
    std::cout << "\nThrid quadratic:  " << q3.toString();
    std::cout << "\nRoots are:\n";
    q3.solve();

    std::cout << "\nAfter subtracting q3 from q is:\n";
    q.subtract(q3);
    std::cout << q.toString();
    std::cout << "\nRoots are:\n";
    q.solve();
}