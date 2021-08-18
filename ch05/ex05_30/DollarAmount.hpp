/*
 ***************************************************
 *
 * DollarAmount.hpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.23 (Egg-timer program)
 * 
 * Created: Aug 9,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <cmath>

class DollarAmount {
public:
   DollarAmount(int64_t nbrDollars, int64_t nbrCents)
      : amount{nbrDollars * 100 + nbrCents} {
   }

   int64_t getAmount() const {
      return amount;
   }

private:
   int64_t amount{0};
};
