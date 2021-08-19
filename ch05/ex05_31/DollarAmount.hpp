/*
 ***************************************************
 *
 * DollarAmount.hpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.31 (DollarAmount Arithmetic)
 * 
 * Created: Aug 18,2021
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

   void divide( int64_t factor ) {
      DollarAmount remainingAmt {
         amount / factor
      };

      amount = remaingAmt;
   }

private:
   int64_t amount{0};
};
