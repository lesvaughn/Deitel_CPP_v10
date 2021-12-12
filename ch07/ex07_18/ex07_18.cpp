/******************************************************************************
 * ex07_18.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.18 (Craps Game Modification)
 * 
 * Compiled using GNU 11.2.1
 *
 * Created: Dec 12,2021
 * Author:  lvaughn
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>
#include <array>

unsigned int rollDice();


std::default_random_engine craps_engine{static_cast<unsigned int>(time(0))};
std::uniform_int_distribution<unsigned int> dieRoll{1, 6};

int main() {
	enum class Status {CONTINUE, WON, LOST};
	const size_t arraySize{22};
	std::array<int, arraySize> rollsToWin{};
	std::array<int, arraySize> rollsToLose{};


	unsigned int myPoint{0};
	unsigned int totalRolls{0};

	Status gameStatus;

	for (unsigned int i{0}; i < 1000; ++i) {
		size_t nbrRolls{1};
		++totalRolls;
		unsigned int sumOfDice{rollDice()};

		switch (sumOfDice) {
			case 7:
			case 11:
				gameStatus = Status::WON;
				break;
			case 2:
			case 3:
			case 12:
				gameStatus = Status::LOST;
				break;
			default:
				gameStatus = Status::CONTINUE;
				myPoint = sumOfDice;
				break;
		} // end swtich

		while (Status::CONTINUE == gameStatus) {
			++nbrRolls;
			++totalRolls;
			sumOfDice = rollDice();

			if (sumOfDice == myPoint) {
				gameStatus = Status::WON;
			}
			else {
				if (sumOfDice == 7) {
					gameStatus = Status::LOST;
				}
			}
		} // end while

		if (Status::WON == gameStatus) {
			if (nbrRolls > 21) {
				nbrRolls = 21;
			}
			++rollsToWin[nbrRolls];
		}
		else {
			if (nbrRolls > 21) {
				nbrRolls = 21;
			}
			++rollsToLose[nbrRolls];
		}

	}// end for

	std::cout << std::setw(4) << "Roll" << std::setw(8) << "Wins"
		<< std::setw(8) << "Loses" << std::endl;

	for (std::size_t i{1}; i < arraySize; ++i) {
		std::cout << std::setw(4) << i << std::setw(8) << rollsToWin[i]
		<< std::setw(8) << rollsToLose[i] << std::endl;
	}

} // end main

unsigned int rollDice() {
	int die1 = dieRoll(craps_engine);
	int die2 = dieRoll(craps_engine);
	int sum{die1 + die2};

	return sum;
}