// AccountTest.cpp
// Deitel - C++ How to Program v10
// Aug 2, 2021
// lvaughn

#include <iostream>
#include "Account.h"

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
   std::cout << "adding " << depositAmount << " to account1 balance";
   account1.deposit(depositAmount);

   // display balances
   std::cout <<"\n\naccount1:  " << account1.getName() << " balance is $"
      << account1.getBalance();
   std::cout <<"\naccount2:  " << account2.getName() << " balance is $"
      << account2.getBalance();

   // get deposit amount for account2
   std::cout << "\n\nEnter deposit amount for account2:  ";
   std::cin >> depositAmount;
   std::cout << "adding " << depositAmount << " to account2 balance";
   account2.deposit(depositAmount);

   // display balances
   std::cout <<"\n\naccount1:  " << account1.getName() << " balance is $"
      << account1.getBalance();
   std::cout <<"\naccount2:  " << account2.getName() << " balance is $"
      << account2.getBalance();

   // get withdrawal amount for account1
   std::cout << "\n\nEnter withdrawal amount for account1:  ";
   int withdrawalAmount{0};
   std::cin >> withdrawalAmount;
   std::cout << "withdrawing " << withdrawalAmount << " from account1";
   account1.withdraw(withdrawalAmount);

   // display balances
   std::cout <<"\n\naccount1:  " << account1.getName() << " balance is $"
      << account1.getBalance();
   std::cout <<"\naccount2:  " << account2.getName() << " balance is $"
      << account2.getBalance();

   // get withdrawal amount for account2
   std::cout << "\n\nEnter withdrawal amount for account2:  ";
   std::cin >> withdrawalAmount;
   std::cout << "withdrawing " << withdrawalAmount << " from account2";
   account2.withdraw(withdrawalAmount);

   // display balances
   std::cout <<"\n\naccount1:  " << account1.getName() << " balance is $"
      << account1.getBalance();
   std::cout <<"\naccount2:  " << account2.getName() << " balance is $"
      << account2.getBalance();


   std::cout << std::endl;

}