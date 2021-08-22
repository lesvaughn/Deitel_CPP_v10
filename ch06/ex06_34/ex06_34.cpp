/*
 ***************************************************
 *
 * ex06_34.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.34 (Guess-the-Number Game)
 * 
 * Created: Aug 22,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
   srand(static_cast<unsigned int>(time(0)));
   char playAgain{'y'};

   std::cout << "I have a number between 1 and 1000.";
   std::cout << "\nCan you guess my number?";
   std::cout << "\nPlease type your first guess:  ";
   int guess;
   std::cin >> guess;

   while (playAgain == 'y') {
      int number = 1 + rand() % 1000;
      while (guess != number) {
         if (guess < number) {
            std::cout << "Too low.  Try again." << std::endl;
         }
         else {
            std::cout << "Too high.  Try again." << std::endl;
         }
         std::cout << "\nPlease enter your next guess:  ";
         std::cin >> guess;
      }

      std::cout << "Excellent!  You guessed the number!";
      std::cout << "\nWould you like to play again (y or n)?";
      std::cin >> playAgain;
   }
}