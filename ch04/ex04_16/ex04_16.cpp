// ex04_16.cpp
// Deite - C++ How to Program v10
// Exercise 4.16
// Aug 5, 2021
// lvaughn

#include <iostream> 
#include <iomanip>

int main()
{
   double contribution{0.0};
   double totalContribution{0.0};

   std::cout << "\nEnter the number of laps completed (-1 to quit):  ";
   int laps{0};
   std::cin >> laps;

   std::cout << std::setprecision(2) << std::fixed;

   while (laps != -1){
      std::cout << "Enter the sponsorship rate:  ";
      double sponsorshipRate{0.0};
      std::cin >> sponsorshipRate;

      if (laps <= 40){
         contribution = laps * sponsorshipRate;
      }
      else {
         contribution = (40 * sponsorshipRate) + ((laps - 40) * sponsorshipRate * 1.5);
      }

      std::cout << "Student contribution is:  " << contribution << "\n" << std::endl;
      totalContribution += contribution;

      std::cout << "Enter the number of laps completed (-1 to quit):  ";
      std::cin >> laps; 
   }

   std::cout << "Total funds raised:  " << totalContribution << std::endl;
}
