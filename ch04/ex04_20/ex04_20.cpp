// ex04_20.cpp
// Deitel - C++ How to Program
// Exercise 4.20
// Aug 5, 2021
// lvaughn

#include <iostream>

int main()
{
   unsigned int passes{0};
   unsigned int failures{0};
   unsigned int studentCounter{1};

   while (studentCounter <= 10) {
      std::cout << "Enter result (1 = pass, 2 = fail):  ";
      int result;
      std::cin >> result;

      if (result == 1 || result == 2) {
         if (result == 1) {
            passes += 1;
         }
         else {
            failures += 1;
         }

         studentCounter += 1;
      }  
      else {
          std::cout << "Invalid input - try again." << std::endl;
      }    
   }

   std::cout << "Passed: " << passes << "\nFailed:  " << failures << std::endl;

   if (passes > 8) {
      std::cout << "Bonus to instructor!" << std::endl;
   }
}
