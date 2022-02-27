/*****************************************************************************
 * Date.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.9 (Improving Class Student)
 * 
 * Feb 25, 2022
 * lvaughn
 *****************************************************************************/
#include <sstream>
#include <string>
#include <array>
#include <stdexcept>
#include "Date.h"

Date::Date(unsigned int mn, unsigned int dy, unsigned int yr)
    : month{mn}, day{checkDay(dy)}, year{yr} {\
    if (mn < 1 || mn > monthsPerYear) {
        throw std::invalid_argument("month must be 1-12");
    }
}

std::string Date::toString() const {
    std::ostringstream output;
    output << month << "/" << day << "/" << year;
    return output.str();
}

unsigned int Date::checkDay(int testDay) const
{
    static const std::array<int, monthsPerYear + 1> daysPerMonth {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (testDay > 0 || testDay <= daysPerMonth[month]) {
        return testDay;
    }

    // February 29 check for leap year
    if (month == 2 && testDay == 29 && (year % 400 == 0 ||
        (year % 4 == 0 && year % 100 != 0))) {
        return testDay;
    } 

    throw std::invalid_argument("Invalid day for current month and year");
}