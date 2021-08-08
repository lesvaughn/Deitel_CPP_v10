/*
 ***************************************************
 *
 * ex05_17.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.17 (Calculating Sales)
 * 
 * Created: Aug 7,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>

int main()
{
   double totalSales{ 0.00 };

   std::cout << "Enter product number (-1 to quit):  ";
   int productNbr;
   std::cin >> productNbr;

   while ( productNbr != -1 ) {
      std::cout << "Enter the quantity sold:  ";
      int quantitySold;
      std::cin >> quantitySold;
      
      switch ( productNbr ) {
         case 1:
            totalSales += 2.98 * quantitySold;
            break;

         case 2:
            totalSales += 4.50 * quantitySold;
            break;

         case 3:
            totalSales += 9.98 * quantitySold;
            break;

         case 4:
            totalSales += 4.49 * quantitySold;
            break;

         case 5:
            totalSales += 6.87 * quantitySold;
            break;

         default:
            std::cout << "Invalid product number - Try again." << std::endl;
      }

       std::cout << "Enter product number (-1 to quit):  ";
       std::cin >> productNbr;
   }

   std::cout << std::setprecision( 2 ) << std::fixed;
   std::cout << "The total retail vaules of all products sold was $" << totalSales << std::endl;
}
