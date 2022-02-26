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
    Student::Student(Name&, char gender, Date&, unsigned int,
        std::string&);

    void setName(Name&);
    void setSex(char);
    void setDateOfBirth(Date&);
    void setRegistrationNumber(unsigned int);
    void setEmail(std::string&);

    Name getName() const;
    char getSex() const;
    Date getDate() const;
    unsigned int getRegistrationNumber() const;
    std::string getEmail() const;

    void setName(Name&);
    void setSex(char);
    void setDateOfBirth(Date&);
    void setRegistrationNumber(unsigned int);
    void setEmail(std::string&);

private:
    Name name;
    char sex;
    Date dateOfBirth;
    unsigned int registrationNumber;
    std::string email;
};

#endif
