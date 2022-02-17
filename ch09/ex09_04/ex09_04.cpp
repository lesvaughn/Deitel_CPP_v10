/*****************************************************************************
 * fig09_04.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.4 (Enhancing Class Time)
 * 
 * Feb 16, 2021
 * lvaughn
 ****************************************************************************/
#include <iostream>
#include <ctime>
#include "Time.h"

int main()
{
    Time t;

    std::cout << t.toUniversalString();
    std::cout << "\n" << t.toStandardString() << std::endl;
}