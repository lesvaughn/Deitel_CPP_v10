/*****************************************************************************
 * ex08_13.cpp
 * 
 * Deitel C++ How to Program v10
 * Exercise 8.13 (What Does This Code Do?)
 * 
 * Jan 26, 2022
 * lvaughn
 ****************************************************************************/

// function prototype
void mystery1(char *s1, const char *s2);

#include <iostream>

int main()
{
    char string1[80];
    char string2[80];

    std::cout << "Enter two strings: ";
    std::cin >> string1 >> string2;
    mystery1(string1, string2);
    std::cout << string1 << std::endl;
}

void mystery1(char *s1, const char *s2)
{
    while (*s1 != '\0')
    {
        ++s1;
    }

    for ( ; (*s1 = *s2); ++s1, ++s2)
    {
        ;  // empty statement
    }
}