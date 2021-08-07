/*
 ***************************************************
 *
 * ex04_38.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.38 (World Population Growth)
 * 
 * Created: Aug 7,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>

int main()
{
   double growthRate{ 0.0103 };
   double currentPop{ 7.875 };
   int year{ 1 };

   std::cout << "\n\t\tPopulation\tPopulation Increase" << std::endl;
   std::cout << "Year\t\t(Billions)\tMillions"<< std::endl;

   std::cout << std::setprecision(3) << std::fixed;

   while ( year <= 75 ) {
      double popIncrease = currentPop * growthRate;
      currentPop += popIncrease;
      std::cout << year << "\t\t" << currentPop << "\t\t" << popIncrease * 1000 << std::endl;

      ++year;
   }

} 