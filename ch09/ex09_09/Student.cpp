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
//#include "Name.h"
//#include "Date.h"

Student::Student(const Name& student_name, char gender, const Date& birthDate,
                 unsigned int registration_nbr, const std::string& emailAddress)
    : name{student_name}, sex{gender}, dateOfBirth{birthDate},
      registrationNumber{registration_nbr}, email{emailAddress} {
}

void Student::setName(const Name& student_name)
{
  name = student_name;
}

void Student::setSex(char gender)
{
  sex = gender;
}

void Student::setDateOfBirth(const Date& birthDate)
{
  dateOfBirth = birthDate;
}

void Student::setRegistrationNumber(unsigned int registration_nbr)
{
  registrationNumber = registration_nbr;
}

void Student::setEmail(const std::string& emailAddress)
{
  email = emailAddress;
}

Name Student::getName() const
{
  return name;
}

char Student::getSex() const 
{
  return sex;
}

Date Student::getDateOfBirth() const
{
  return dateOfBirth;
}      

unsigned int Student::getRegistrationNumber() const
{
  return registrationNumber;

}

std::string Student::getEmail() const
{
  return email;
}
