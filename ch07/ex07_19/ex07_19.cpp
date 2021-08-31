/*
 ***************************************************
 *
 * ex07_19.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.19 (Converting vector Example of Section 7.10 to array)
 
 * Created: Aug 30,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/

#include <iostream>
#include <array>


void outputIntegers1(std::array<int, 7> &);
void inputIntegers1(std::array<int, 7> &);
void outputIntegers2(std::array<int, 10> &);
void inputIntegers2(std::array<int, 10> &);


int main() {
	std::array<int, 7> integers1{};
	std::array<int, 10> integers2{};

	std::cout << "Size of array integers1 is " << integers1.size() << std::endl;
	std::cout << "Array after initialization:  ";
	outputIntegers1(integers1);

	std::cout << "\nSize of array integers2 is " << integers2.size() << std::endl;
	std::cout << "Array after initialization:  ";
	outputIntegers2(integers2);

	std::cout << "\nEnter 17 integers:  ";
	inputIntegers1(integers1);
	inputIntegers2(integers2);

	std::cout << "\nAfter input, the arrays contain:\n" << "integers1:  ";
	outputIntegers1(integers1);
	std::cout << "integers2:  ";
	outputIntegers2(integers2);

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

	std::array<int, 7> integers3{integers1};

	std::cout << "\nSize of array integers3 is " << integers3.size() 
				 << "\narray after initalization:  ";
	outputIntegers1(integers3);

}

void outputIntegers1(std::array<int, 7> &items) {
	for( int item : items) {
		std::cout << item << " ";
	}
	std::cout << std::endl;
}

void outputIntegers2(std::array<int, 10> &items) {
	for( int item : items) {
		std::cout << item << " ";
	}
	std::cout << std::endl;
}

void inputIntegers1(std::array<int, 7> &items) {
	for (int& item : items) {
		std::cin >> item;
	}
}

void inputIntegers2(std::array<int, 10> &items) {
	for (int& item : items) {
		std::cin >> item;
	}
}

