// heartRateCalc.cpp
// Deitel - C++ How to Program v10
// Aug 2, 2021
// lvaughn

#include <iostream>

int main()
{
   std::cout << "Enter your age in years:  ";
   int age{ 0 };
   std::cin >> age;

   int mhr{ 0 };
   mhr = 220 - age;

   int tanaka{ 0 };
   tanaka = 208 - (0.7 * age);

   int gellish{ 0 };
   gellish = 207 - (0.7 * age);

   int nes{ 0 };
   nes = 211 - (.64 * age);

   int smallestMHR{ mhr };
   if (tanaka < smallestMHR) {
      smallestMHR = tanaka;
   }
   if (gellish < smallestMHR) {
      smallestMHR = gellish;
   }
   if (nes < smallestMHR) {
      smallestMHR = gellish;
   }

   int largestMHR{ mhr };
   if (tanaka > largestMHR) {
      largestMHR = tanaka;
   }
   if (gellish > largestMHR) {
      largestMHR = gellish;
   }
   if (nes > largestMHR) {
      largestMHR = nes;
   }

   std::cout << "MHR:\t\t" << mhr;
   std::cout << "\nTanka:\t\t" << tanaka;
   std::cout << "\nGellish:\t" << gellish;
   std::cout << "\nNet et al:\t" << nes;
   std::cout << "\n\nMaximun heart rate range is " << smallestMHR << " to " << largestMHR;
   std::cout << std::endl;
}
