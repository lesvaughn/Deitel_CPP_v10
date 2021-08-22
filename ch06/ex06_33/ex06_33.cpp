/*
 ***************************************************
 *
 * ex06_33.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.33 (Reverse Digits)
 * 
 * Created: Aug 22,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

bool flip();

int main() {
   srand(static_cast<unsigned int>(time(0)));
   int heads{0};
   int tails{0};

   for ( int toss{1}; toss <= 100; ++toss ) {
      int result = flip();
      if ( result ) {
         std::cout << "Heads" << std::endl;
         ++heads;
      }
      else {
         std::cout << "Tails" << std::endl;
         ++tails;
      }
   }

   std::cout << "\nHeads = " << heads << "\t\tTails = " << tails << std::endl;
}

bool flip() {
   return rand() % 2;
}