/*
 ***************************************************
 *
 * ex07_16.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.16 (Dice Rolling)
 * Created: Aug 29,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <array>
#include <random>
#include <ctime>
#include <iomanip>

int main() {
	const unsigned int SIZE = 36'000'000;
	std::default_random_engine dice_engine{static_cast<unsigned int>(time(0))};
	std::uniform_int_distribution<unsigned int> diceInit{1, 6};

	std::array<int, 13> dice_sum{};

	for (unsigned int i{0}; i < SIZE; ++i) {
		unsigned int die1 = diceInit(dice_engine);
		unsigned int die2 = diceInit(dice_engine);
		unsigned int sum = die1 + die2;
		++dice_sum[sum];
	}

	std::cout << "Roll" << std::setw(10) << "Number" << std::endl;

	for (unsigned int i{2}; i <= 12; ++i) {
		std::cout << std::setw(4) << i << std::setw(10) << dice_sum[i] << std::endl;
	}
}