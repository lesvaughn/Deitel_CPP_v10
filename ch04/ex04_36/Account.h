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
#include <string>

class Account {
public:
   Account(std::string accountName, double initialBalance)
      : name{accountName} {

      if (initialBalance > 0.0) {
         balance = initialBalance;
      }
   }

   void deposit(double depositAmount) {
      if (depositAmount > 0.0) {
         balance = balance + depositAmount;
      }
   }

   void withdraw(double withdrawalAmount) {
      if (withdrawalAmount <= balance) {
         balance = balance - withdrawalAmount;
      }
      else {
         std::cout << "\nWithdrawal amount exceeded account balance." << std::endl;
      }
   }

   double getBalance() const {
      return balance;
   }

   void setName(std::string accountName) {
      name = accountName;
   }

   std::string getName() const {
      return name;
   }

private:
   std::string name;
   double      balance{0.00};
};
