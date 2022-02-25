/*****************************************************************************
 * Student.h
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.8 (Student Class)
 * 
 * Feb 25, 2022
 * lvaughn
 *****************************************************************************/
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(const std::string&, const std::string&, const std::string&,
            char, unsigned int, unsigned int, const std::string&);

    void setFirstName(const std::string&);
    void setMiddleName(const std::string&);
    void setLastName(const std::string&);
    void setSex(const char);
    void setYearOfBirth(unsigned int);
    void setRegistrationNumber(unsigned int);
    void setEmail(const std::string&);

    std::string getFirstName() const;
    std::string getMiddleName() const;
    std::string getLastName() const;
    char getSex() const;
    unsigned int getYearOfBirth() const;
    unsigned int getRegistrationNumber() const;
    std::string getEmail() const;

private:
    std::string firstName;
    std::string middleName;
    std::string lastName;
    char sex;
    unsigned int yearOfBirth;
    unsigned int registrationNumber;
    std::string email;
};

#endif
