// TestDate.cpp
// Deitel - C++ How to Program
// Aug 2, 2021
// lvaughn

#include <iostream>
#include "Date.h"

int main()
{
   Date anniversary{5, 1, 1987};
   anniversary.displayDate();

   std::cout << anniversary.getMonth() << "/" << anniversary.getDay() << "/"
      << anniversary.getYear() << std::endl;

   anniversary.setMonth(13);
   anniversary.setDay(13);
   anniversary.setYear(1951);

    std::cout << anniversary.getMonth() << "/" << anniversary.getDay() << "/"
      << anniversary.getYear() << std::endl;
}