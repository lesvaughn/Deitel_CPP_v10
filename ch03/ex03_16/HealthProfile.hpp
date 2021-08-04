// HealthProfile.hpp
// Deitel - C++ How to Program v10
// Exercise 3.16
// Aug 2, 2021
// lvaughn

#include <iostream>
#include <string>

class HealthProfile {
public:
   HealthProfile(std::string nameFirst, std::string nameLast, char genderIn, int birthMonth,
                 int birthDay, int birthYear, int heightIn, int weightIn)
      :  firstName{nameFirst},
         lastName{nameLast},
         gender{genderIn},
         monthOfBirth{birthMonth},
         dayOfBirth{birthDay},
         yearOfBirth{birthYear},
         height{heightIn},
         weight{weightIn} {
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

   void setGender(char genderIn) {
      gender = genderIn;
   }

   char getGender() const {
      return gender;
   }

   void setMonthOfBirth(int birthMonth) {
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

   void setHeight(int heightIn) {
      height = heightIn;
   }

   int getHeight() const {
      return height;
   }

   void setWeight(int weightIn) {
      weight = weightIn;
   }

   int getWeight() const {
      return weight;
   }

   int age() const {
      return 2021 - yearOfBirth;
   }

   int mhr() const {
      return 220 - age();
   }

   int thr_min() const {
      return mhr() * .5;
   }

   int thr_max() const {
      return mhr() * .85;
   }

   int bmi() const {
      return (weight * 703) / (height * height);
   }


private:
   std::string firstName;
   std::string lastName;
   char        gender;
   int         monthOfBirth;
   int         dayOfBirth;
   int         yearOfBirth;
   int         height;
   int         weight;
};
