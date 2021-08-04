// Account.h
// Deitel - C++ How to Program v10
// Chapter 3, exercise 13
// Aug 2, 2021
// lvaughn

#include <string>

class Account {
public:
   Account(std::string accountName, int initialBalance)
      : name{accountName} {

      if (initialBalance > 0) {
         balance = initialBalance;
      }
   }

   void deposit(int depositAmount) {
      if (depositAmount > 0) {
         balance = balance + depositAmount;
      }
   }

   void withdraw(int withdrawalAmount) {
      if (withdrawalAmount <= balance) {
         balance = balance - withdrawalAmount;
      }
      else {
         std::cout << "\nWithdrawal amount exceeded account balance." << std::endl;
      }
   }

   int getBalance() const {
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
   int balance{0};
};
