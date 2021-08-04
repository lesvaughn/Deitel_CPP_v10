// Account.h
// Deitel - C++ How to Program v10
// Chapter 3, exercise 14
// Aug 3, 2021
// lvaughn

#include <iostream>
#include <string>

class Account {
public:
   Account(unsigned int acctNbr, std::string nameFirst, std::string nameLast, 
           double balanceIn) 
      :  accountNumber{acctNbr},
         firstName{nameFirst},
         lastName{nameLast},
         balance{balanceIn}   {   
   }

   void displayAccount() const {
      std::cout << "\nAccount number:\t" << accountNumber;
      std::cout << "\nFirst name:\t" << firstName;
      std::cout << "\nLast name:\t" << lastName;
      std::cout << "\nBalance:\t" << balance << std::endl;
   }

private:
   unsigned int accountNumber;
   std::string firstName;
   std::string lastName;
   double balance;
};
