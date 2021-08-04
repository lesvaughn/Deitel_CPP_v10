// InvoiceTest.cpp
// Deitel - C++ How to Program v10
// Chapter 3, exercise 10
// Aug 2, 2021
// lvaughn

#include <iostream>
#include <string>
#include "Invoice.h"

int main()
{
   Invoice invoice1{"W-120", "Enhanced widget", 10, 2};

   // display data
   std::cout << "Part number:\t\t" << invoice1.getPartNumber();
   std::cout << "\nPart Description:\t" << invoice1.getPartDescription();
   std::cout << "\nQuantity Purchased:\t" << invoice1.getQuantityPurchase();
   std::cout << "\nPrice per item:\t\t" << invoice1.getPricePerItem();
   std::cout << "\nValue added tax:\t" << invoice1.getVat();
   std::cout << "\nDiscount rate:\t\t" << invoice1.getDiscountRate();
   std::cout << "\n\nInvoice amount:\t" << invoice1.getInvoiceAmount() << std::endl;

   // set new values
   std::cout << "\nEnter part number:  ";
   std::string prtNbr;
   std::cin >> prtNbr;
   invoice1.setPartNumber(prtNbr);

   std::cout << "Enter part description:  ";
   std::string prtDesc;
   std::cin >> prtDesc;
   invoice1.setPartDescription(prtDesc);

   int qtyPurchased{0};
   std::cout << "Enter quantity purchased:  ";
   std::cin >> qtyPurchased;
   invoice1.setQuantityPurchased(qtyPurchased);

   int price{0};
   std::cout << "Enter price per item:  ";
   std::cin >> price;
   invoice1.setPricePerItem(price);

   double valueAddedTax{0.0};
   std::cout << "Enter the value added tax:  ";
   std::cin >> valueAddedTax;
   invoice1.setVat(valueAddedTax);

   
   double discount{0.0};
   std::cout << "Enter the discount rate:  ";
   std::cin >> discount;
   invoice1.setDiscountRate(discount);

   // display updated data
   std::cout << "\nPart number:\t\t" << invoice1.getPartNumber();
   std::cout << "\nPart Description:\t" << invoice1.getPartDescription();
   std::cout << "\nQuantity Purchased:\t" << invoice1.getQuantityPurchase();
   std::cout << "\nPrice per item:\t\t" << invoice1.getPricePerItem();
   std::cout << "\nValue added tax:\t" << invoice1.getVat();
   std::cout << "\nDiscount rate:\t\t" << invoice1.getDiscountRate();
   std::cout << "\n\nInvoice amount:\t" << invoice1.getInvoiceAmount() << std::endl;
}