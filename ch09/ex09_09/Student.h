/*****************************************************************************
 * Student.h
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.9 (Improving Class Student)
 * 
 * Feb 25, 2022
 * lvaughn
 *****************************************************************************/
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Date.h"
#include "Name.h"


class Student {
public:
    Student::Student(Name fullName, char gender, Date birthYear,
        unsigned int registration_nbr, std::string emailAddress);

    void set

private:
    Name name;
    char sex;
    Date dateOfBirth;
    unsigned int registrationNumber;
    std::string email;
};

#endif
