/*
 ***************************************************
 *
 * ex05_19.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.19 (Calculating the value of pi)
 * 
 * Created: Aug 8,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>

int main()
{
   long double pi{ 0.0 };
   unsigned int nbrTerms{ 1 };
   bool addFlag{ true };
   bool piFlag{ false };
   unsigned int termsNeeded{ 0 };

   std::cout << std::setprecision(20) << std::fixed;

   for ( unsigned int i{1}; i < 400000; i += 2 ) {
      if ( addFlag ) {
         pi += 4.0 / i;
         addFlag = false;
      }
      else {
         pi -= 4.0 / i;
         addFlag = true;
      }

      if ( piFlag == false ) {
         if ( pi >= 3.14159 && pi < 3.1416 ) {
            termsNeeded = nbrTerms;
            piFlag = true;
         }
      }
     
      std::cout << nbrTerms << std::setw(30) << pi << std::endl;
      ++nbrTerms;     
   }

   std::cout << "\n3.14159 reached in " << termsNeeded << " terms." << std::endl;
}
