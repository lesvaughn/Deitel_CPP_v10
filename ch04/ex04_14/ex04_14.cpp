// ex04_14.cpp
// Deitel - C++ How to Program v10
// Exercise 4.14
// Aug 3, 2021
// lvaughn

#include <iostream>
#include <iomanip>

int main()
{
   std::cout << "Enter account number (-1 to quit):  ";
   int acctNbr{0};
   std::cin >> acctNbr;

   while (acctNbr != -1) {      
      std::cout << "Enter the beginning balance:  ";
      double beginningBalance{0.0};
      std::cin >> beginningBalance;

      std::cout << "Enter total charges:  ";
      double totalCharges{0.0};
      std::cin >> totalCharges;

      std::cout << "Enter total credits:  ";
      double totalCredits{0.0};
      std::cin >> totalCredits;

      std::cout << "Enter credit limit:  ";
      double creditLimit{0.0};
      std::cin >> creditLimit;

      double newBalance{beginningBalance + totalCharges - totalCredits};
      std::cout << std::setprecision(2) << std::fixed;
      std::cout << "New balance is " << newBalance << std::endl;
      
      if (newBalance > creditLimit) {
         std::cout << "Account:\t" << acctNbr << std::endl;
         std::cout << "Credit limit:\t" << creditLimit << std::endl;
         std::cout << "Balance:\t" << newBalance << std::endl;
         std::cout << "Credit Limit Exceeded.\n" <<std::endl;
      }

      std::cout << "Enter account number (-1 to quit):  ";
      std::cin >> acctNbr;

   }
}