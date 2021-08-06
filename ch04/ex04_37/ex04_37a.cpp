/*
 ***************************************************
 *
 * ex04_37a.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.37a (Enforcing Privacy with Cryptography - encrypt a four-digit number)
 * 
 * Created: Aug 6,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   std::cout << "Enter a four-digit integer:  ";
   int nbr;
   std::cin >> nbr;

   int digit1 = nbr / 1000;
   int remainder = nbr % 1000;
   int digit2 = remainder / 100;
   remainder %= 100;
   int digit3 = remainder / 10;
   int digit4 = remainder % 10;

   int encryptedD1 = ( digit3 + 7 ) % 10;
   int encryptedD2 = ( digit4 + 7 ) % 10;
   int encryptedD3 = ( digit1 + 7 ) % 10;
   int encryptedD4 = ( digit2 + 7 ) % 10;

   int encryptedNbr = encryptedD1 * 1000 + encryptedD2 * 100 + encryptedD3 * 10 + encryptedD4;

   std::cout << "The encrypted number is " << encryptedNbr << std::endl;

}