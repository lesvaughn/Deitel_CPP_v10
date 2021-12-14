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
   std::uniform_int_distribution<size_t> randomMove{0, 7};

   for (size_t startRow{0}; startRow <= 1; ++startRow)
   {
      for (size_t startColumn{0}; startColumn <= 0; ++startColumn)
      {
         std::array<std::array<int, column>, row> board{0};
         unsigned int counter{0};
         unsigned int moveCount{0};
         unsigned int currentRow = startRow;
         unsigned int currentColumn = startColumn;

         std::cout << "\nKnight starts at row " << startRow << " and column "
            << startColumn << std::endl;

         while (counter <= 64)   // allow up to 64 moves
         {
            int bestMove{10};
            unsigned int bestRow;
            unsigned int bestColumn;
            unsigned int potentialRow;
            unsigned int potentialColumn;

            for (unsigned int move{0}; move <=7; ++move)
            {
               // verify move is valid
               potentialRow = currentRow + horizontal[move];
               potentialColumn = currentColumn + vertical[move];

               if (potentialRow <= 7 && potentialColumn <= 7
                     && board[potentialRow][potentialColumn] == 0)
               {
                  if (accessibility[potentialRow][potentialColumn] < bestMove)
                  {
                     bestMove = accessibility[potentialRow][potentialColumn];
                     bestRow = potentialRow;
                     bestColumn = potentialColumn;
                  }
               }
            } // end for move

            if (bestMove <= 8)
            {
               accessibility[bestRow][bestColumn] = 10;
               currentRow = bestRow;
               currentColumn = bestColumn;
               ++moveCount;
               board[currentRow][currentColumn] == moveCount;
         
               //std::cout << "Move " << moveCount << ":  Row - " << currentRow
                //  << "   Column -  " << currentColumn << std::endl;
            }

            ++counter;

         } // end while
          std::cout << " and took " << moveCount << " moves." << std::endl;
      } // for j
     
   } // end for i

}
