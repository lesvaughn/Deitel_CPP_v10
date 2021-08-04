// car_pool.cpp
// Deitel - C++ How to Program v10
// Aug 2, 2021
// lvaughn

#include <iostream>

int main()
{
   std::cout << "Enter the total miles driven per day:  ";
   int milesPerDay{ 0 };
   std::cin >> milesPerDay;

   std::cout << "Enter the cost per gallon of gasoline:  ";
   int costPerGallon{ 0 };
   std::cin >> costPerGallon;

   std::cout << "Enter the average miles per gallon:  ";
   int mpg{ 0 };
   std::cin >> mpg;

   std::cout << "Enter the parking fees per day:  ";
   int parkingFees{ 0 };
   std::cin >> parkingFees;

   std::cout << "Enter the tolls per day:  ";
   int tolls{ 0 };
   std::cin >> tolls;

   std::cout << "\nYour cost per day of driving to work is ";
   std::cout << (milesPerDay / mpg) * costPerGallon + parkingFees + tolls << " dollars.";
   std::cout << std::endl;
}
