/*****************************************************************************
 * ex07_30.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 7.30 (Print an array)
 * 
 * Dec 26, 2021
 * lvaughn
 *****************************************************************************/

#include <iostream>
#include <array>
#include <string>

template <typename T, size_t size>
void printArray(std::array<T, size> &ar, size_t startPos, size_t endPos)
{
    if (startPos == endPos)
    {
        std::cout << std::endl;
        return;
    }
    else
    {
        std::cout << ar[startPos];
        printArray(ar, startPos + 1, endPos);
    }
}

int main()
{
    std::array<int, 5> ar{1, 2, 3, 4, 5 };
    printArray(ar, 0, 5);

    std::array<std::string, 13> str{ "Hello, world!" };
    printArray(str, 0, 13);
}

