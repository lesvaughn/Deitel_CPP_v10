// TargetHeartRates_Test.cpp
// Deitel - C++ How to Program v10
// Exercise 3.15
// Aug 3, 2021
// lvaughn

#include <iostream>
#include "HeartRates.hpp"

int main()
{
   HeartRates heartRates{"Les", "Vaughn", 8, 13, 1951};

   std::cout << "\nFirst name:\t" << heartRates.getFirstName();
   std::cout << "\nLast name:\t" << heartRates.getLastName();
   std::cout << "\nDate of birth:\t" << heartRates.getMonthOfBirth() << "/"
             << heartRates.getDayOfBirth() << "/" << heartRates.getYearOfBirth();
   std::cout << "\nAge:\t\t" << heartRates.calculateAge();
   heartRates.targetHR(); 
   std::cout << std::endl;
}