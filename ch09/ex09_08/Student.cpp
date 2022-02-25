/*****************************************************************************
 * Student.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.8 (Student Class)
 * 
 * Feb 25, 2022
 * lvaughn
 *****************************************************************************/
#include <string>
#include "Student.h"

Student::Student(const std::string& first, const std::string& middle,
                 const std::string& last, char gender, unsigned int birthYear,
                 unsigned int registration_nbr, const std::string& emailAddress)
    : firstName{first}, middleName{middle}, lastName{last}, sex{gender},
      yearOfBirth{birthYear}, registrationNumber{registration_nbr}, 
      email{emailAddress} {

}

void Student::setFirstName(const std::string& first) {
    firstName = first;
}

void Student::setMiddleName(const std::string& middle) {
    middleName = middle;
}

void Student::setLastName(const std::string& last) {
    lastName = last;
}

void Student::setSex(char gender) {
    sex = gender;
}

void Student::setYearOfBirth(unsigned int birthYear) {
    yearOfBirth = birthYear;
}

void Student::setRegistrationNumber(unsigned int registration_nbr) {
    registrationNumber =  registration_nbr;
}

void Student::setEmail(const std::string& emailAddress) {
    email = emailAddress;
}

std::string Student::getFirstName() const {
    return firstName;
}

std::string Student::getMiddleName() const {
    return middleName;
}

std::string Student::getLastName() const {
    return lastName;
}

char Student::getSex() const {
    return sex;
}

unsigned int Student::getYearOfBirth() const {
    return yearOfBirth;
}

unsigned int Student::getRegistrationNumber() const {
    return registrationNumber;
}

std::string Student::getEmail () const {
    return email;
}

