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
#include <array>

const std::size_t craftsmen{4};
const std::size_t products{5};

int main() {
   std::array<std::array<int, products>, craftsmen> stock{0};

   for (std::size_t craftsm{1}; craftsm <= craftsmen; ++craftsm) {
      for (std::size_t prods{1}; prods <= products; ++prods) {
         std::cout << craftsm << " - " << prods << ":  ";
         std::cin >> stock[craftsm][prods];
      } 
   }
}