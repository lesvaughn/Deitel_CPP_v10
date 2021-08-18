/*
 ***************************************************
 *
 * ex05_28.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.28 ("The Twelve Days of Chritsmas" Song)
 * 
 * Created: Aug 15,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   for ( unsigned int day{1}; day <= 13; ++day ) {
      std::cout << "\nOn the ";
      switch ( day ) {
         case 1:
            std::cout << "first ";
            break;
         case 2:
            std::cout << "second ";
            break;
         case 3:
            std::cout << "third ";
            break;
         case 4:
            std::cout << "fourth ";
            break;
         case 5:
            std::cout << "fifth ";
            break;
         case 6:
            std::cout << "sixth ";
            break;
         case 7:
            std::cout << "seventh ";
            break;
         case 8:
            std::cout << "eight ";
            break;
         case 9:
            std::cout << "nineth ";
            break;
         case 10:
            std::cout << "tenth ";
            break;
         case 11:
            std::cout << "eleventh ";
            break;
         case 12:
            std::cout << "twelth ";
      }

      std::cout << "day of Christmas my true love sent to me:\n";

      switch ( day ) {
         case 12:
            std::cout << "Twelve drummers drumming,\n";
            [[fallthrough]];
         case 11:
            std::cout << "Eleven pipers piping,\n";
            [[fallthrough]];
         case 10:
            std::cout << "Ten lords a-leaping,\n";
            [[fallthrough]];
         case 9:
            std::cout << "Nime ladies dancing,\n";
            [[fallthrough]];
         case 8:
            std::cout << "Eight maids a-milking,\n";
            [[fallthrough]];
         case 7:
            std::cout << "Seven swans a-swimming,\n";
            [[fallthrough]];
         case 6:
            std::cout << "Six geese a-laying,\n";
            [[fallthrough]];
         case 5:
            std::cout << "Five gold rings,\n";
            [[fallthrough]];
         case 4:
            std::cout << "Four calling birds,\n";
            [[fallthrough]];
         case 3:
            std::cout << "Three french hens,\n";
            [[fallthrough]];
         case 2:
            std::cout << "Two turtle doves,\n";
            std::cout << "And a partridge in a pear tree." << std::endl;
            break;
         case 1:
            std::cout << "A partridge in a pear tree." << std::endl;
      }

     

   }

}
