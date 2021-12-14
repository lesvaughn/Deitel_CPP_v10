/*
 ***************************************************
 *
 * ex07_22b.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.22b (Knight's Tour)
 * 
 * Created: Sept 5,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <array>
#include <random>
#include <ctime>

int main() {
   const unsigned int row{8};
   const unsigned int column{8};
   std::array<std::array<int, column>, row> board;
   std::array<int, column> horizontal{2, 1, -1, -2, -2, -1, 1, 2};
   std::array<int, row> vertical{-1, -2, -2, -1, 1, 2, 2, 1};

   std::default_random_engine moveEngine{static_cast<unsigned int>(time(0))};
   std::uniform_int_distribution<size_t> randomMove{0, 7};

   unsigned int moveCount{0};
   size_t currentRow{3};
   size_t currentColumn{4};
   unsigned int counter{0};

   std::cout << "\nKnight starts at row " << currentRow << " and column "
      << currentColumn << std::endl;

   while (counter <= 64)
   {
      size_t moveNumber = randomMove(moveEngine);
      size_t potentialRow = currentRow + horizontal[moveNumber];
      size_t potentialColumn = currentColumn + vertical[moveNumber];

      if (potentialRow >= 0 && potentialRow <= 7 
            && potentialColumn >= 0 && potentialColumn <= 7)
      {
         if (board[potentialRow][potentialColumn] == 0)
         {
            currentRow = potentialRow;
            currentColumn = potentialColumn;

            std::cout << "Move " << moveCount << ":  " << moveNumber
               << "\tRow - " << currentRow << "\t\tColumn - " << currentColumn
               << std::endl;

            ++moveCount;
            board[currentRow][currentColumn] = moveCount;
         }
      }

      ++counter;
   }

   std::cout << "Knight moved " << moveCount << " times." << std::endl;

}
