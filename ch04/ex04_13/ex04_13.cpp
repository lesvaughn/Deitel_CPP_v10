// ex04_13.cpp
// Deitel - C++ How to Program v10
// Exercise 4.3
// Aug 3, 2021
// lvaughn

#include <iostream>
#include <iomanip>

int main()
{
   int totalKilometersDriven{0};
   int totalLitersUsed{0}; 

   std::cout << "Enter kilolmeters driven (-1 to quit):  ";
   int kilometersDriven{0};
   std::cin >> kilometersDriven;

   while (kilometersDriven != -1) {
      std::cout << "Enter liters used:  ";
      int litersUsed{0};
      std::cin >>litersUsed;
      std::cout << std::setprecision(5) << std::fixed;
      std::cout << "Kms per liter this trip:  "
                << static_cast<double>(kilometersDriven) / litersUsed;
      
      totalKilometersDriven += kilometersDriven;
      totalLitersUsed += litersUsed;
      std::cout << "\nTotal kms per liter:  "
                << static_cast<double>(totalKilometersDriven) / totalLitersUsed;

      std::cout << "\n\nEnter kilolmeters driven (-1 to quit):  ";
      std::cin >> kilometersDriven;
   }
}