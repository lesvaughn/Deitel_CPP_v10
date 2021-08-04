// AccountTest.cpp
// Deitel - C++ How to Program v10
// Chapter 3, exercise 13
// Aug 2, 2021
// lvaughn

#include <iostream>
#include "Account.h"

void displayAccount(Account);

int main()
{
   Account account1{"Jane Green", 50};
   Account account2{"John Blue", -7};

   // display initial balances of each object
   std::cout <<"account1:  " << account1.getName() << " balance is $"
      << account1.getBalance();
   std::cout <<"\naccount2:  " << account2.getName() << " balance is $"
      << account2.getBalance();

   // get depost amount for ac count1
   std::cout << "\n\nEnter deposit amount for account1:  ";
   int depositAmount{0};
   std::cin >> depositAmount;
   std::cout << "adding " << depositAmount << " to account1 balance\n";
   account1.deposit(depositAmount);

   // display balances
   displayAccount(account1);
   displayAccount(account2);

   // get deposit amount for account2
   std::cout << "\n\nEnter deposit amount for account2:  ";
   std::cin >> depositAmount;
   std::cout << "adding " << depositAmount << " to account2 balance\n";
   account2.deposit(depositAmount);

   // display balances
   displayAccount(account1);
   displayAccount(account2);

   std::cout << std::endl;
}

void displayAccount(Account accountToDisplay)
{
   std::cout << "\n" << accountToDisplay.getName() 
      << " balance is $" << accountToDisplay.getBalance();
} 