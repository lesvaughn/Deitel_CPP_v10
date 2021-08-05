/*
 ***************************************************
 *
 * ex04_30.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.30 (Fibonnacci Sequence)
 * 
 * Created: Aug 5,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   int priorFibbonnaci{0};
   int fibbonnaci{1};

   std::cout << priorFibbonnaci << std::endl;
   std::cout << fibbonnaci << std::endl;

   while ( true ) {
      int temp{fibbonnaci};
      fibbonnaci += priorFibbonnaci;
      priorFibbonnaci = temp;
      std::cout << fibbonnaci << std::endl;
   }
}