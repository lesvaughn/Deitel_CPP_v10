/*
 ***************************************************
 *
 * ex07_21.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.21 (Workshop Summary)
 * 
 * Created: Sept 1,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>
#include <array>



int main() {
   const std::size_t craftsmen{4};
   const std::size_t products{5};
   std::array<std::array<int, products>, craftsmen> stock{0};

   std::cout << "Enter the craftsman's number 1 through 3 are valid values (-1 to quit):  ";
   int craftmensNbr;
   std::cin >> craftmensNbr;

   while (craftmensNbr != -1) {
      std::cout << "Enter the product number 1 through 4 are valid values:  ";
      int prodNbr;
      std::cin >> prodNbr;

      std::cout << "Enter the quantity of items completed:  ";
      int itemsCompleted;
      std::cin >> itemsCompleted;

      stock[craftmensNbr][prodNbr] = itemsCompleted;

      std::cout << "Enter the craftsman's number (-1 to quit):  ";
      std::cin >> craftmensNbr;
   }

   std::cout << std::setw(25) << "Product 1" << std::setw(12) << "Product 2"
             << std::setw(12) << "Product 3" << std::setw(12) << "Product 4" << std::setw(8) 
             << "Total" << std::endl;

   int total{0};

   for (std::size_t craftPerson{1}; craftPerson < craftsmen; ++craftPerson) {
      std::cout << std::setw(12) << "Craftperson " << craftPerson;
      for(std::size_t product{1}; product < products; ++product) {    
         std::cout << std::setw(12) << stock[craftPerson][product];
         total += stock[craftPerson][product];
      }
      std::cout << std::setw(8) << total << std::endl;
      total = 0;
   }

}
