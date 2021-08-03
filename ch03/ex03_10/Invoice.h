// Invoice.h
// Deitel - C++ How to Program v10
// Chapter 3, exercise 10
// Aug 2, 2021
// lvaughn

#include <iostream>
#include <string>

class Invoice {
public:
   Invoice(std::string partNbr, std::string partDesc, int nbrPurchased, int itemPrice)
      :  partNumber{partNbr},
         partDescription{partDesc},
         quantityPurchased{nbrPurchased},
         pricePerItem{itemPrice} {
   }

   void setPartNumber(std::string partNbr) {
      partNumber = partNbr;
   } 

   std::string getPartNumber() const {
      return partNumber;
   }

   void setPartDescription(std::string partDesc) {
      partDescription = partDesc;
   }

   std::string getPartDescription() const {
      return partDescription;
   }

   void setQuantityPurchased(int nbrPurchased) {
      if (quantityPurchased > 0) {
         quantityPurchased = nbrPurchased;
      }
      else {
         std::cout << "\nQuantity purchased must be greater than 0." << std::endl;
      }
   }

   int getQuantityPurchase() const {
      return quantityPurchased;
   }

   void setPricePerItem(int itemPrice) {
      if (pricePerItem > 0) {
         pricePerItem = itemPrice;
      }
      else {
         std::cout << "\nPrice per Item must be greater than 0." << std::endl;
      }
   }

   int getPricePerItem() const {
      return pricePerItem;
   }

   void setVat(double valueAddedTax) {
      if (valueAddedTax >= 0) {
         vat = valueAddedTax;
      }
      else {
         std::cout << "\nValue added tax cannot be negative." << std::endl;
      }
   }

   double getVat() const {
      return vat;
   }

   void setDiscountRate(double rate) {
      if (rate >= 0) {
         discountRate = rate;
      }
      else {
         std::cout << "\nDiscount rate cannont be negative." << std::endl;
      }
   }

   double getDiscountRate() const {
      return discountRate;
   }

   int getInvoiceAmount() const {
      int extendedAmount{0};
      extendedAmount = quantityPurchased * pricePerItem;
      return extendedAmount * (1 + vat) - extendedAmount * discountRate;
   }

private:
std::string partNumber;
std::string partDescription;
int         quantityPurchased;
int         pricePerItem;
double      vat{0.20};
double      discountRate{0.0};
};
