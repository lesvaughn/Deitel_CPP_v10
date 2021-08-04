// Date.h
// Deitel - C++ How to Program v10
// Chapter 3, exercise 12
// Aug 2, 2021
// lvaughn

#include <iostream>

class Date {
public:
   Date(int monthIn, int dayIn, int yearIn)
      : day{dayIn}, year{yearIn} { 

      if (monthIn < 1 || monthIn > 12) {
         std::cout << "Invalid month.  Setting month to 1." << std::endl;
         month = 1;
      }
      else {
         month = monthIn;
      }
   }

   void setMonth(int monthIn) {
      if (monthIn < 1 || monthIn > 12) {
         std::cout << "Invalid month.  Setting month to 1." << std::endl;
         month = 1;
      }
      else {
         month = monthIn;
      }
   }

   int getMonth() const {
      return month;
   }

   void setDay(int dayIn) {
      day = dayIn;
   }

   int getDay() const {
      return day;
   }

   void setYear(int yearIn) {
      year = yearIn;
   }

   int getYear() const {
      return year;
   }

   void displayDate() const {
      std::cout << "\n" << month << "/" << day << "/" << year << std::endl;
   }


private:
    int month;
    int day;
    int year;
};
