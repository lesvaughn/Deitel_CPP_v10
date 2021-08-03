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

   std::cout <<"account1:  " << account1.getName() << " balance is $"
      << account1.getBalance();
   std::cout <<"\naccount2:  " << account2.getName() << " balance is $"
      << account1.getBalance();

   std::cout << std::endl;

}