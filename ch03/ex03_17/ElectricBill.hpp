// ElectricBill.hpp
// Deitel - C++ How to Program v10
// Exercise 3.17
// Aug 3, 2021
// lvaughn

class ElectricBill {
public:
   explicit ElectricBill(double paidAmount) {

      if (paidAmount < 0.0) {
         amountPaid = 0.0;
      }
      else {
         amountPaid = paidAmount;
      }
   }

   void setAmountPaid(double paidAmount) {
      amountPaid = paidAmount;
   }

   double getAmountPaid() const {
      return amountPaid;
   }

   double getVAT() const {
      return vat;
   }

   double getREA() const {
      return rea;
   }

   double getEWURA() const {
      return ewura;
   }

   int getUnits() const {
      double vatTax = amountPaid * vat;
      double reaTax = amountPaid * rea;
      double ewuraTax = amountPaid * ewura;
      double amountAmountAfterDeductions = amountPaid - vatTax - reaTax - ewuraTax - serviceCharge;

      return static_cast<int>(amountAmountAfterDeductions) / pricePerKilowatt;
   }

private:
   double   amountPaid;
   double   vat{0.18};
   int      serviceCharge{5000};
   double   rea{0.03};
   double   ewura{0.01};
   int      pricePerKilowatt{295};
};
