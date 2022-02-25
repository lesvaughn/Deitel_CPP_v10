/*****************************************************************************
 * ex09_08.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.8 (Student Class)
 * 
 * Feb 25, 2022
 * lvaughn
 *****************************************************************************/
#include <iostream>
#include "Student.h"

int main()
{
    Student student1("Les", "W", "Vaughn", 'M', 1951, 1969, "hithere@there.com");

    std::cout << "\nName:  " << student1.getLastName() << ", "
        << student1.getFirstName() << " " << student1.getMiddleName(); 

    std::cout << "\nSex:  " << student1.getSex();
    std::cout << "\nBirth year:  " << student1.getYearOfBirth();
    std::cout << "\nRegistration Number:  " << student1.getRegistrationNumber();
    std::cout << "\nEmail:  " << student1.getEmail() << "\n" << std::endl;

    student1.setFirstName("Patricia");
    student1.setMiddleName("M");
    student1.setLastName("Shurak");
    student1.setSex('F');
    student1.setYearOfBirth(1954);
    student1.setRegistrationNumber(1980);
    student1.setEmail("hottie@hotter.com");

    std::cout << "\nName:  " << student1.getLastName() << ", "
        << student1.getFirstName() << " " << student1.getMiddleName(); 

    std::cout << "\nSex:  " << student1.getSex();
    std::cout << "\nBirth year:  " << student1.getYearOfBirth();
    std::cout << "\nRegistration Number:  " << student1.getRegistrationNumber();
    std::cout << "\nEmail:  " << student1.getEmail() << "\n" << std::endl;
        
}   