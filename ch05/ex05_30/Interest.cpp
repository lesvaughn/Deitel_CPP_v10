/*
 ***************************************************
 *
 *Interest.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.30 (DollarAmount Constructor with Two Parameters)
 * 
 * Created: Aug 17,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>
#include <string>
#include "DollarAmount.hpp"

int main()
{
   DollarAmount d1{123, 45};
   DollarAmount d2{15, 76};

   std::cout << d1.getAmount() << std::endl;
   std::cout << d2.getAmount() << std::endl;

}
