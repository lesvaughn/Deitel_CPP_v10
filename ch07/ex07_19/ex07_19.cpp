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


void outputIntegers1(std::array<int, 7>);
void inputIntegers1(std::array<int, 7>);
void outputIntegers2(std::array<int, 10>);
void inputIntegers2(std::array<int, 10>);


int main() {
	std::array<int, 7> integers1{};
	std::array<int, 10> integers2{};

	std::cout << "Size of array integers1 is " << integers1.size() << std::endl;
	std::cout << "Array after initialization:  ";
	outputIntegers1(integers1);

	std::cout << "\nSize of array integers2 is " << integers2.size() << std::endl;
	outputIntegers2(integers2);

	std::cout << "Enter 17 integers:  ";
	inputIntegers1(integers1);
	inputIntegers2(integers2);

	std::cout << "\nAfter input, the vectors contain:\n" << "integers1:  ";
	outputIntegers1(integers1);
	std::cout << "integers2:  ";
	outputIntegers2(integers2);

}

void outputIntegers1(std::array<int, 7> items) {
	for( int item : items) {
		std::cout << item << " ";
	}
	std::cout << std::endl;
}

void outputIntegers2(std::array<int, 10> items) {
	for( int item : items) {
		std::cout << item << " ";
	}
	std::cout << std::endl;
}

void inputIntegers1(std::array<int, 7> items) {
	for (int item : items) {
		std::cin >> item;
	}
}

void inputIntegers2(std::array<int, 10> items) {
	for (int item : items) {
		std::cin >> item;
	}
}

