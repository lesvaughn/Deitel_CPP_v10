/******************************************************************************
 * Time.h
 *
 * Deitel - C++ How to Program v10
 * Exercise 9.4 (Enhancing Class Time)
 * 
 * Feb 16, 2021
 * lvaughn
 *****************************************************************************/
#include <string>

#ifndef TIME_H
#define TIME_H

class Time {
public:
    Time();
    std::string toUniversalString() const;
    std::string toStandardString() const;

private:
    unsigned int hour{};
    unsigned int minute{};
    unsigned int second{};
};

#endif
