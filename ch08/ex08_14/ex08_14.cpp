/*****************************************************************************
 * ex08_14.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 8.14 (What Does This Code Do?)
 * 
 * Jan 26, 2022
 * lvaughn
 ****************************************************************************/

#include <iostream>

int main()
{
    int numbers[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *nPtr = &numbers[0];

    std::cout << "\nAddress of the first element of array:" << &numbers[0];
    std::cout << "\nAddress stored in nPtr:" << nPtr;

    std::cout << "\nOriginal array: \n";
    for (size_t i{0}; i < 10; ++i)
    {
        std::cout << numbers[i] << " ";
    }

    for (size_t j{0}; j < 10; ++j)
    {
        *(nPtr + j) = *(nPtr + j) ** (nPtr + j);
    }

    std::cout << "\nModified array:";
    for (size_t k{0}; k < 10; ++k)
    {
        std::cout << "\nAddress: " << (nPtr + k) << "\tValue: " << *(nPtr + k);
    }

    std::cout << std::endl;
}