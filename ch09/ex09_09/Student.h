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
    Student(const Name&, char gender, const Date&, unsigned int,
        const std::string&);

    void setName(const Name&);
    void setSex(char);
    void setDateOfBirth(const Date&);
    void setRegistrationNumber(unsigned int);
    void setEmail(const std::string&);

    Name getName() const;
    char getSex() const;
    Date getDateOfBirth() const;
    unsigned int getRegistrationNumber() const;
    std::string getEmail() const;

private:
    Name name;
    char sex;
    Date dateOfBirth;
    unsigned int registrationNumber;
    std::string email;
};

#endif
