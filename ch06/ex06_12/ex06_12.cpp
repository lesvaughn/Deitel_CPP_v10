/*
 ***************************************************
 *
 * ex06_12.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.12 (Parking Charges)
 * 
 * Created: Aug 18,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>
#include <cmath>

double calculateCharges( double );

int main()
{
   std::cout << "Enter hours parked for customer 1:  ";
   double cust1Hours;
   std::cin >> cust1Hours;

   std::cout << "Enter hours parked for customer 2:  ";
   double cust2Hours;
   std::cin >> cust2Hours;

   std::cout << "Enter hours parked for customer 3:  ";
   double cust3Hours;
   std::cin >> cust3Hours;

   double cust1Charges = calculateCharges( cust1Hours );
   double cust2Charges = calculateCharges( cust2Hours );
   double cust3Charges = calculateCharges( cust3Hours );

   double totalHours = cust1Hours + cust2Hours + cust3Hours;
   double totalCharges = cust1Charges + cust2Charges + cust3Charges;

   std::cout << "Car" << std::setw(10) << "Hours" << std::setw(10) << "Charge" << std::endl;
   std::cout << "1" << std::setw(12) << std::setprecision(1) << std::fixed << cust1Hours 
             << std::setw(10) << std::setprecision(2) << cust1Charges;
   std::cout << "\n2" << std::setw(12) << std::setprecision(1) << std::fixed << cust2Hours 
             << std::setw(10) << std::setprecision(2) << cust2Charges;
   std::cout << "\n3" << std::setw(12) << std::setprecision(1) << std::fixed << cust3Hours 
             << std::setw(10) << std::setprecision(2) << cust3Charges;
   
   std::cout << "\nTotal" << std::setw(8) << std::setprecision(1) << totalHours << std::setw(10) 
             << std::setprecision(2) << totalCharges << std::endl;
   
}

double calculateCharges( double hoursParked ) {
   double charageableHours = ceil( hoursParked );
   double charge{ 20.00 };

   if ( charageableHours > 3.0 ) {
      charge += ( charageableHours - 3.0 ) * 5.0;
   }

   if ( charge > 50.00 ) {
      charge = 50.00;
   }

   return charge;
   
}