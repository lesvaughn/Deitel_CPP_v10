/******************************************************************************
 * ex07_19.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.19 (Converting vector Example of Section 7.10 to array)
 * 
 * Compiled using GNU 11.2.1
 *
 * Created: Dec 12,2021
 * Author:  lvaughn
 *****************************************************************************/

#include <iostream>
#include <array>

template <size_t size>
void outputIntegers(const std::array<int, size>& items)
{
	for( auto item : items)
	{
		std::cout << item << " ";
	}

	std::cout << std::endl;
}

template <size_t size>
void inputIntegers(std::array<int, size> &items) 
{
	for (auto& item : items)
	{
		std::cin >> item;
	}
}

int main() {
	const size_t integers1Size{7};
	const size_t integers2Size{10};
	const size_t integers3Size{7};
	std::array<int, integers1Size> integers1;
	std::array<int, integers2Size> integers2;

	std::cout << "Size of array integers1 is " << integers1.size() << std::endl;
	std::cout << "Array after initialization:  ";
	outputIntegers(integers1);

	std::cout << "\nSize of array integers2 is " << integers2.size() << std::endl;
	std::cout << "Array after initialization:  ";
	outputIntegers(integers2);

	std::cout << "\nEnter 17 integers:  ";
	inputIntegers(integers1);
	inputIntegers(integers2);

	std::cout << "\nAfter input, the arrays contain:\n" << "integers1:  ";
	outputIntegers(integers1);
	std::cout << "integers2:  ";
	outputIntegers(integers2);

	std::cout << "\nEvaluating:  integers1 != integers2" << std::endl;
	if (integers1.size() != integers2.size()) {
		std::cout <<"integers1 and integers2 are not equal" << std::endl;
	}
	else {
		for(std::size_t i{0}; i < integers1.size(); ++i) {
			if (integers1[i] != integers2[i]) {
				std::cout << "integers1 and integers2 are not equal" << std::endl;
				break;
			}
		}
	}

	std::array<int, integers3Size> integers3{integers1};

	std::cout << "\nSize of array integers3 is " << integers3.size() 
				 << "\narray after initalization:  ";
	outputIntegers(integers3);

   std::cout << "\nintegers1[5] is " << integers1[5];
   std::cout << "\n\nAssigning 1000 to integers[5]" << std::endl;
   integers1[5] = 1000;
   std::cout << "integers1: ";
   outputIntegers(integers1);

}
