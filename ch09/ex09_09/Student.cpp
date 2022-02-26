/*****************************************************************************
 * Student.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.9 (Improving Class Student)
 * 
 * Feb 25, 2022
 * lvaughn
 *****************************************************************************/
#include "Student.h"

Student::Student(Name& student_name, char gender, Date& birthDate,
                 unsigned int registration_nbr, std::string& emailAddress)
    : name{student_name}, sex{gender}, dateOfBirth{birthDate},
      registrationNumber{registration_nbr}, email{emailAddress} {
}




      
