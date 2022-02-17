/******************************************************************************
 * Time.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.4 (Enhancing Class Time)
 * 
 * Feb 16, 2021
 * lvaughn
 *****************************************************************************/
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <string>
#include <ctime>
#include "Time.h"

void Time::setTime()
{
    time_t curr_time;
    curr_time = time(NULL);
    tm *tm_local = localtime(&curr_time);

    std::cout << "Time is " << tm_local->tm_hour << std::endl;

    hour = tm_local->tm_hour;
    minute = tm_local->tm_min;
    second = tm_local->tm_sec;
}

std::string Time::toUniversalString() const 
{
    std::ostringstream output;

    output << std::setfill('0') << std::setw(2) << hour << ":"
        << std::setw(2) << minute << ":" << std::setw(2) << second;

    return output.str();
}

std::string Time::toStandardString() const
{
    std::ostringstream output;

    output << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
        << std::setfill('0') << std::setw(2) << minute << ":"
        << std::setw(2) << second << (hour < 12 ? " AM " : " PM");

    return output.str();
}