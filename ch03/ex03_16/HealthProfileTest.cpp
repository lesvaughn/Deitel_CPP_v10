// HealthProfileTest.cpp
// Deitel - C++ How to Program
// Exercise 3.16
// Aug 3, 2021
// lvaughn

#include <iostream>
#include "HealthProfile.hpp"

int main()
{
   HealthProfile myProfile{"Les", "Vaughn", 'M', 8, 13, 1951, 70, 174};

   std::cout << "\nFirst name:\t" << myProfile.getFirstName();
   std::cout << "\nLast name:\t" << myProfile.getLastName();
   std::cout << "\nGender\t\t" << myProfile.getGender();
   std::cout << "\nDate of birth:\t" << myProfile.getMonthOfBirth() << "/"
             << myProfile.getDayOfBirth() << "/" << myProfile.getYearOfBirth();
   std::cout << "\nHeight:\t\t" << myProfile.getHeight();
   std::cout << "\nWeight:\t\t" << myProfile.getWeight();
   std::cout << "\nAge:\t\t" << myProfile.age();
   std::cout << "\nBMI:\t\t" << myProfile.bmi();
   std::cout << "\n\nTarget heart rate:  " << myProfile.thr_min() << " - " << myProfile.thr_max();

   std::cout << "\n\nBMI VALUES";
   std::cout << "\nUnderweight:\tless than 18.5";
   std::cout << "\nNormal:\t\tbetween 18.5 and 24.9";
   std::cout << "\nOverweight:\tbetween 25 and 29.9";
   std::cout << "\nObese:\t\t30 or greater\n" << std::endl;

}