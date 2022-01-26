/******************************************************************************
 * ex08_11.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 8.11 (Find the Code Errors)
 * 
 * Jan 16, 2022
 * lvaughn
 *****************************************************************************/

#include <iostream>

int main()
{
    // Fix for a)
    // pointer must be initialized to an address
    int value = 5;
    int* number = &value;
    std::cout << *number<< std::endl;

    // Fix for b)
    // Cannot assign a long pointer to be a double pointer.  Assume, what
    // was trying to be accomplished was casting the value the double pointer
    // pointed to to an integer.  And assigned it to what integerPtr was 
    // pointing to.
    double dblNbr = 1.1;
    long int lInt = 5;
    double* realPtr = &dblNbr;
    long* integerPtr =&lInt;
    *integerPtr = static_cast<long int>(*realPtr);
    std::cout << *integerPtr << std::endl;

    // fix for c)
    // As i and j are pointers they must be initialized to addresses;
    int a = 4;
    int b;
    int* i = &a;
    int* j = &b;
    *j = *i * 2;
    std::cout << *j << std::endl;

    // fix for d)
    // Most likely the intention was to print the value xPtr pointed to
    // instead of the address of xPtr;
    double x = 19.34;
    double* xPtr{ &x };
    std::cout << *xPtr << std::endl;

}
