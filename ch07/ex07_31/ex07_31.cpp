/******************************************************************************
 * ex07_31.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 7.31 (Print a String Backward)
 * 
 * Dec 26, 2021
 * lvaughn
 *****************************************************************************/

#include <iostream>
#include <string>

// function prototype
void stringReverse(std::string str, size_t pos);


int main()
{
    std::string str{ "Hello, world!" };

    stringReverse(str, str.length() - 1);
}

void stringReverse(std::string str, size_t pos)
{
    if (pos == 0)
    {
        std::cout << str[pos];
        return;
    }
    else
    {
        std::cout << str[pos];
        stringReverse(str, pos - 1);
    }
}