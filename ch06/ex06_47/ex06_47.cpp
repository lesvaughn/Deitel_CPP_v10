/*
 ***************************************************
 *
 * ex06_41.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.41 (Recursive Greatest Common Divisor)
 * Created: Aug 25,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

unsigned int rollDice();

int main() {
	enum class Status {CONTINUE, WON, LOST};

	srand(static_cast<unsigned int>(time(0)));

	int bankBalance{1000};
	int initialBankBalance{bankBalance};
	unsigned int myPoint{0};
	Status gameStatus;
	int wager{0};

	while (bankBalance > 0) {
		std::cout << "\nYour bank balance is " << bankBalance << std::endl;
		if (bankBalance >= 1.8 * initialBankBalance){
			std::cout << "You're up big.  Now's the time to cash in your chips!" << std::endl;
		}
		std::cout << "Enter your wager:  ";
		std::cin >> wager;

		while (wager > bankBalance) {
			std::cout << "Wager cannot be greater than your bank balance - try again.";
			std::cin >> wager;
		}

		if (wager <= .1 * bankBalance) {
			std::cout << "Aw, cmon, take a chance!" <<std::endl;
		}
		else if (wager >= .8 * bankBalance){
			std::cout << "Oh, your are going for broke, huh?" << std::endl;
		}

		unsigned int sumOfDice{rollDice()};

		switch (sumOfDice) {
			case 7:
			case 11:
				gameStatus = Status::WON;
				bankBalance += wager;
				break;
			case 2:
			case 3:
			case 12:
				gameStatus = Status::LOST;
				bankBalance -= wager;
				break;
			default:
				gameStatus = Status::CONTINUE;
				myPoint = sumOfDice;
				std::cout << "Point is " << myPoint << std::endl;
				break;
		} // end switch

		while (Status::CONTINUE == gameStatus) {
			sumOfDice = rollDice();

			if (sumOfDice == myPoint) {
				gameStatus = Status::WON;
				bankBalance += wager;
				if (bankBalance >= 1.8 * initialBankBalance){
					std::cout << "You're up big.  Now's the time to cash in your chips!" << std::endl;
				}
			}
			else {
				if (sumOfDice == 7) {
					gameStatus = Status::LOST;
					bankBalance -= wager;
				}
			}
		} // end while(Status::CONTINUE)

		if (Status::WON == gameStatus) {
			std::cout << "Player wins" << std::endl;
		}
		else {
			std::cout << "Player loses" << std::endl;
		}
	} // end while(bankBalance)

}

unsigned int rollDice() {
	int die1{1 + rand() % 6};
	int die2{1 + rand() % 6};
	int sum{die1 + die2};

	std::cout << "Player rolled " << die1 << " + " << die2 << " = = " << sum << std::endl;
	return sum;
}
