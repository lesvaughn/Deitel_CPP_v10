/*****************************************************************************
 * Name.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.7 (Name Class)
 * 
 * Feb 24, 2022
 * lvaughn
 ****************************************************************************/
#include <string>
#include <sstream>
#include "Name.h"

Name::Name(const std::string& first, const std::string& middle, 
           const std::string& last, const std::string& prefix)
    : firstName{first}, middleName{middle}, lastName{last},
      salutation{prefix} {

}

std::string Name::toString() const
{
    std::ostringstream output;

    output << salutation << " " << lastName << ", " << firstName << " " 
        << middleName;

    return output.str();
}

void Name::setFirstName(const std::string& first)
{
    firstName = first;
}

void Name::setMiddleName(const std::string& middle)
{
    middleName = middle;
}

void Name::setLastName(const std::string& last)
{
    lastName = last;
}

void Name::setSalutation(const std::string& prefix)
{
    salutation = prefix;
}

std::string Name::getFirstName() const 
{
    return firstName;
}

std::string Name::getMiddleName() const
{
    return middleName;
}

std::string Name::getLastName() const
{
    return lastName;
}

std::string Name::getSalutation() const
{
    return salutation;
}