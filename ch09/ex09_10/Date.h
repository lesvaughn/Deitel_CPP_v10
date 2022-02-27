/*****************************************************************************
 * Date.h
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.9 (Improving Class Student)
 * 
 * Feb 25, 2022
 * lvaughn
 *****************************************************************************/
#include <string>

#ifndef DATE_H
#define DATE_H

class Date {
public:
    static const int monthsPerYear{12};
    explicit Date(unsigned int = 1, unsigned int = 1, unsigned int = 2000);
    std::string toString() const;

private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

    unsigned int checkDay(int) const;
};

#endif
