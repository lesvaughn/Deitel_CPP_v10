/*
 ***************************************************
 *
 * ex06_54.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.54 (C++11 Random Numbers:  Modifed Craps Game)
 * 
 * Created: Aug 25,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

unsigned int rollDice();

std::default_random_engine engine{static_cast<unsigned int>(time(0))};
std::uniform_int_distribution<unsigned int> randomInt{1, 6};

int main() {
   enum class Status{CONTINUE, WON, LOST};

   unsigned int myPoint{0};
   Status gameStatus;
   unsigned int sumOfDice{rollDice()};

   switch (sumOfDice) {
      case 7:
      case 11:
         gameStatus = Status::WON;
         break;
      case 2:
      case 3:
      case 12:
         gameStatus = Status::LOST;
         break;
      default:
         gameStatus = Status::CONTINUE;
         myPoint = sumOfDice;
         std::cout << "Point is " << myPoint << std::endl;
         break;
   }

   while (Status::CONTINUE == gameStatus) {
      sumOfDice = rollDice();

      if (sumOfDice == myPoint) {
         gameStatus = Status::WON;
      }
      else {
         if (sumOfDice == 7) {
            gameStatus = Status::LOST;
         }
      }
   }

   if (Status::WON == gameStatus) {
      std::cout << "Player wins" << std::endl;
   }
   else {
      std::cout << "Play loses" << std::endl;
   }
}

unsigned int rollDice() {
   unsigned int die1{randomInt(engine)};
   unsigned int die2{randomInt(engine)};

   unsigned int sum{die1 + die2};
   std::cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << std::endl;
   return sum;
}