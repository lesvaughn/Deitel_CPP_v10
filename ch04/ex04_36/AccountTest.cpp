/*
 ***************************************************
 *
 * ex04_36.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.36 (Modified Account Class)
 * 
 * Created: Aug 6,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>
#include "Account.h"

int main()
{
   Account account1{"Jane Green", 50.00};
   Account account2{"John Blue", -7.00};

   std::cout << std::setprecision(2) << std::fixed;

   // display initial balances of each object
   std::cout <<"account1:  " << account1.getName() << " balance is $"
      << account1.getBalance();
   std::cout <<"\naccount2:  " << account2.getName() << " balance is $"
      << account2.getBalance();

   // get depost amount for ac count1
   std::cout << "\n\nEnter deposit amount for account1:  ";
   double depositAmount{0.00};
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
   double withdrawalAmount{0.00};
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