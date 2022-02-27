/*****************************************************************************
 * ex09_09.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.9 (Improving Class Student)
 * 
 * Feb 25, 2022
 * lvaughn
 *****************************************************************************/
#include <iostream>
//#include <string>
#include "Date.h"
#include "Name.h"
#include "Student.h"

int main()
{
    Name name1{"Leslie", "W", "Vaughn", "Mr"};
    Date birthDate{8, 13, 1951};

    Student student1{name1, 'M', birthDate, 1969, "a_yahoo@yahoo.net"};
    
    std::cout << name1.toString();
    std::cout << "\nSex: " << student1.getSex();
    std::cout << "\nBirth date:  " << birthDate.toString();
    std::cout << "\nRegistration number:  " << student1.getRegistrationNumber();
    std::cout << "\nEmail:  " << student1.getEmail() << std::endl;
}