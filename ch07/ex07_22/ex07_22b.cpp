/*****************************************************************************
 * ex07_22b.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.22b (Knight's Tour)
 * 
 * Complied using GNU 10.2.1
 * 
 * Created: Dec 15,2021
 * Author:  lvaughn
 *****************************************************************************/
#include <iostream>
#include <array>
#include <random>
#include <ctime>

int main() {
   const unsigned int row{8};
   const unsigned int column{8};
   std::array<std::array<int, column>, row> board{0};
   std::array<int, column> horizontal{2, 1, -1, -2, -2, -1, 1, 2};
   std::array<int, row> vertical{-1, -2, -2, -1, 1, 2, 2, 1};

   std::default_random_engine moveEngine{static_cast<unsigned int>(time(0))};
   std::uniform_int_distribution<size_t> randomMove{0, 7};

   unsigned int moveCount{0};
   unsigned int currentRow{3};
   unsigned int currentColumn{4};
   unsigned int counter{0};

   std::cout << "\nKnight starts at row " << currentRow << " and column "
      << currentColumn << std::endl;

   while (counter <= 64)
   {
      unsigned int moveNumber = randomMove(moveEngine);
      unsigned int potentialRow = currentRow + horizontal[moveNumber];
      unsigned int potentialColumn = currentColumn + vertical[moveNumber];

      if (potentialRow <= 7 && potentialColumn <= 7)
      {
         if (board[potentialRow][potentialColumn] == 0)
         {
            currentRow = potentialRow;
            currentColumn = potentialColumn;

            std::cout << "Move " << moveCount << ":  " << "\tRow - "
               << currentRow << "\t\tColumn - " << currentColumn << std::endl;

            ++moveCount;
            board[currentRow][currentColumn] = moveCount;
         }
      }

      ++counter;
   }

   std::cout << "Knight moved " << moveCount << " times." << std::endl;

}
