// ElectricBillTest.cpp
// Deitel- C++ How to Progra v10
// Exercise 3.17
// Aug2, 2021
// lvaughn

#include <iostream>
#include "ElectricBill.hpp"

int main()
{
   ElectricBill myBill{10000.0};

   std::cout << "Amount paid:\t" << myBill.getAmountPaid();
   std::cout << "\nVAT:\t\t" << myBill.getVAT() * myBill.getAmountPaid();
   std::cout << "\nREA:\t\t" << myBill.getREA() * myBill.getAmountPaid();
   std::cout << "\nEWURA:\t\t" << myBill.getEWURA() * myBill.getAmountPaid();
   std::cout << "\nService charge:\t5000";

   std::cout << "\n\nBought " << myBill.getUnits() << " units." << std::endl;
}