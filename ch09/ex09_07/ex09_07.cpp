/*****************************************************************************
 * ex09_07.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.7
 * 
 * Feb 24, 2022
 * lvaughn
 ****************************************************************************/
#include <iostream>
#include <string>
#include "Name.h"

int main()
{
    Name myName{"Leslie", "W", "Vaughn", "Mr"};

    std::cout << myName.toString() << "\n";

    myName.setFirstName("Bill");
    myName.setMiddleName("Willie");

    std::cout << myName.getFirstName() << "\n";
    std::cout << myName.getMiddleName() << "\n";  
    std::cout << myName.toString() << "\n";
}