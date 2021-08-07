/*
 ***************************************************
 *
 * ex04_40.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.40 (Home Building)
 * 
 * Created: Aug 7,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <cmath>

int main()
{
   int bricksPerSM{ 104 };
   double volumeMotarPerBrick{ 0.00034 };
   int cementBagsPerCMofMotar{ 7 };

   std::cout << "Enter the hieght of the wall in meters (-1 to quit):  ";
   int height;
   std::cin >> height;

   while ( height != -1 ) {
      std::cout << "Enter the width of the wall in meters:  ";
      int width;
      std::cin >> width;

      int areaOfWall = height * width;
      int bricksNeeded = areaOfWall * bricksPerSM;
      int nbrBricksPlusWaste = ceil(bricksNeeded * 1.025);
      double motarNeeded = ceil(( bricksNeeded * volumeMotarPerBrick ) * 1.05);
      int bagsMotar = ceil(motarNeeded / cementBagsPerCMofMotar);

      std::cout << "The area of the wall is " << areaOfWall << " square meters." << std::endl;
      std::cout << "Number of bricks needed is:  " << nbrBricksPlusWaste << std::endl;
      std::cout << "Number of bags of mortar needed is:  " << bagsMotar << std::endl;

      std::cout << "Enter the hieght of the wall in meters (-1 to quit):  ";
      std::cin >> height;

   }
}