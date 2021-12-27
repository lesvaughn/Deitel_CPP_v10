/*****************************************************************************
 * ex08_10.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 8.10 (Function Headers and Prototypes)
 * 
 * Dec 27, 2021
 * lvaughn
 *****************************************************************************/

#include <iostream>

// function prorotypes
double sum(double* x, double* y, double* z);
void rate(double itemRate[], size_t size);

int main()
{
    double x = 1.1;
    double y = 2.2;
    double z = 3.3;

    std::cout << sum(&x, &y, &z) << std::endl;
}

double sum(double* x, double* y, double* z)
{
    return *x + *y + *z;
}

void rate(double itemRate[], size_t size)
{
    
}