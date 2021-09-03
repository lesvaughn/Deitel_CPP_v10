/*
 ***************************************************
 *
 * ex07_18.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.18 (Craps Game Modification)
 
 * Created: Aug 30,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <random>
#include <ctime>
#include <array>

unsigned int rollDice();


std::default_random_engine craps_engine{static_cast<unsigned int>(time(0))};
std::uniform_int_distribution<unsigned int> dieRoll{1, 6};

int main() {
	enum class Status {CONTINUE, WON, LOST};
	std::array<int, 22> rollsToWin{};
	std::array<int, 22> rollsToLose{};


	unsigned int myPoint{0};
	unsigned int totalRolls{0};

	Status gameStatus;

	for (unsigned int i{0}; i < 1000; ++i) {
		int nbrRolls{1};
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
				std::cout << "Point is " << myPoint << std::endl;
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
			std::cout << "Play wins" << std::endl;
		}
		else {
			if (nbrRolls > 21) {
				nbrRolls = 21;
			}
			++rollsToLose[nbrRolls];
			std::cout << "Player loses" << std::endl;
		}

	}// end for

	std::cout << "Wins" << std::endl;

	for (std::size_t i{1}; i <= 21; ++i) {
		std::cout << i << "\t" << rollsToWin[i] << std::endl;
	}

	std::cout << "\nLoses" << std::endl;

	for (std::size_t i{1}; i <= 21; ++i) {
		std::cout << i << "\t" << rollsToLose[i] << std::endl;
	}

	std::cout << "The average length of a craps game is " << totalRolls / 1000 << " rolls" << std::endl;


} // end main

unsigned int rollDice() {
	int die1 = dieRoll(craps_engine);
	int die2 = dieRoll(craps_engine);
	int sum{die1 + die2};

	std::cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << std::endl;
	return sum;
}