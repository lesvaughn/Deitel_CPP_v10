/*
 ***************************************************
 *
 * ex07_22c.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.22c (Knight's Tour)
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

   std::array<std::array<int, column>, row> board{0};
   std::array<int, column> horizontal{2, 1, -1, -2, -2, -1, 1, 2};
   std::array<int, row> vertical{-1, -2, -2, -1, 1, 2, 2, 1};
   std::array<std::array<int, column>, row> accessibility {2, 3, 4, 4, 4, 4, 3, 2,
                                                           3, 4, 6, 6, 6, 6, 4, 3,
                                                           4, 6, 8, 8, 8, 8, 6, 4,
                                                           4, 6, 8, 8, 8, 8, 6, 4,
                                                           4, 6, 8, 8, 8, 8, 6, 4,
                                                           4, 6, 8, 8, 8, 8, 6, 4,
                                                           3, 4, 6, 6, 6, 6, 4, 3,
                                                           2, 3, 4, 4, 4, 4, 3, 2};

   std::default_random_engine moveEngine{static_cast<unsigned int>(time(0))};
   std::uniform_int_distribution<unsigned int> randomMove{0, 7};

   unsigned int moveCount{0};
   int currentRow{3};
   int currentColumn{4};
   bool landedAlready{false};

   while (moveCount <= 64 && landedAlready == false) {
      int moveNumber = randomMove(moveEngine);
      if (currentRow + horizontal[moveNumber] >= 0 && currentRow + horizontal[moveNumber] <= 7
            && currentColumn + vertical[moveNumber] >= 0 && currentColumn + 
               vertical[moveNumber] <= 7) {
         if (board[currentRow + horizontal[moveNumber]][currentColumn + vertical[moveNumber]] 
               == 0) {
            currentRow += horizontal[moveNumber];
            currentColumn += vertical[moveNumber];
            ++moveCount;
            std::cout << moveCount << ":  " << moveNumber << "\tRow - " << currentRow << "\t\tColumn - " << currentColumn << std::endl;
            board[currentRow][currentColumn] = moveCount;
      
         }
         else {
            landedAlready = true;
         }
      }
   }

   std::cout << "Knight moved " << moveCount << " times." << std::endl;

}
