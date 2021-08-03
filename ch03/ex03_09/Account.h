// Account.h
// Deitel - C++ How to Program v10
// Chapter 3, exercise 9
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
