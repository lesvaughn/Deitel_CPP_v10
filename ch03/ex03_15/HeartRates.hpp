// HeartRates.hpp
// Deitel - C++ How to Program v10
// Exercise 3.15
// Aug 3, 2021
// lvaughn

#include <iostream>
#include <string>

class HeartRates {
public:
   HeartRates(std::string nameFirst, std::string nameLast, int birthMonth,\
              int birthDay, int birthYear)
      :  firstName{nameFirst}, 
         lastName{nameLast},
         monthOfBirth{birthMonth},
         dayOfBirth{birthDay},
         yearOfBirth{birthYear} {
   }

   void setFirstName(std::string nameFirst) {
      firstName = nameFirst;
   }

   std::string getFirstName() const {
      return firstName;
   }

   void setLastName(std::string nameLast) {
      lastName = nameLast;
   }

   std::string getLastName() const {
      return lastName;
   }

   void setMontOfBirth(int birthMonth) {
      monthOfBirth = birthMonth;
   }

   int getMonthOfBirth() const {
      return monthOfBirth;
   }

   void setDayOfBirth(int birthDay) {
      dayOfBirth = birthDay;
   }

   int getDayOfBirth() const {
      return dayOfBirth;
   }

   void setYearOfBirth(int birthYear) {
      yearOfBirth = birthYear;
   }

   int getYearOfBirth() const {
      return yearOfBirth;
   }

   int calculateAge() const {
      return 2021 - yearOfBirth;
   }

   int calculateMHR() const {
      return 220 - calculateAge();
   }

   void targetHR() const {
      std::cout << "\n\nTarget heart rate is " << calculateMHR() * .5 << " - " 
                << calculateMHR() * .85 << std::endl;
   }

private:
   std::string firstName;
   std::string lastName;
   int         monthOfBirth;
   int         dayOfBirth;
   int         yearOfBirth;
};
