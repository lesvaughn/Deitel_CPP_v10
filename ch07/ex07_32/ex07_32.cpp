/******************************************************************************
 * ex07_32.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 7.32 (Find the Maximum Value in an array)
 * 
 * Dec 26, 2021
 * lvaughn
 *****************************************************************************/

#include <iostream>
#include <array>

template<size_t size>
int recursiveMaximum(std::array<int, size> &ar, size_t start, size_t end)
{
    static int max = ar[0];

    if (start == end)
    {
        return max;
    }
    else
    {
        if (ar[start] > max)
        {
            max = ar[start];
        }
        
        return recursiveMaximum(ar, start + 1, end);
    }
}

int main()
{
    std::array<int, 10> intAr{ 10, 20, 3, 4, 5, 100, 9, 8, 7, 60 };

    std::cout << recursiveMaximum(intAr, 1, 10) << std::endl;

}