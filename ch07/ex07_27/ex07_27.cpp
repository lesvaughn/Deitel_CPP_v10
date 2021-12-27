/*****************************************************************************
 * ex07_27.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 7.27 (The Sieve of Eratosthenes)
 * 
 * Dec 25, 2021
 * lvaughn
 *****************************************************************************/

#include <iostream>
#include <array>
#include <cmath>

int main()
{
    const size_t arraySize{1000};
    std::array<bool, arraySize> primeNbrs;

    // set all elements of the array to 'true'
    for (size_t i{0}; i < arraySize; ++i)
    {
        primeNbrs[i] = true;

    }

    // set elements that are not prime to false
    for (size_t i{2}; i < sqrt(arraySize); ++i)
    {
        if (true == primeNbrs[i])
        {
            for (size_t j{i * 2}; j < arraySize; j += i)
            {
                primeNbrs[j] = false;
            }
        }
    }

    // display prime numbers
    for (size_t i{2}; i < arraySize; ++i)
    {
        if (true == primeNbrs[i])
        {
            std::cout << i << "\n";
        }
    }

    std::cout << std::endl;
}