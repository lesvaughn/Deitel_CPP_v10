/*
 ***************************************************
 *
 * ex04_37b.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.37b (Enforcing Privacy with Cryptography - decrypt a number)
 * 
 * Created: Aug 5,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   std::cout << "Enter a four-digit encrypted number:  ";
   int encryptedNbr;
   std::cin >> encryptedNbr;

   int encryptedD1 = encryptedNbr / 1000;
   int remainder = encryptedNbr % 1000;
   int encryptedD2 = remainder / 100;
   remainder %= 100;
   int encryptedD3 = remainder / 10;
   int encryptedD4 = remainder % 10;

   int decryptedD1 =  ( encryptedD3 + 3 ) % 10;
   int decryptedD2 =  ( encryptedD4 + 3 ) % 10;
   int decryptedD3 =  ( encryptedD1 + 3 ) % 10;
   int decryptedD4 =  ( encryptedD2 + 3 ) % 10;

   int decryptedNbr = decryptedD1 * 1000 + decryptedD2 * 100 + decryptedD3 * 10 + decryptedD4;

   std::cout << "The decrypted number is " << decryptedNbr << std::endl;
}