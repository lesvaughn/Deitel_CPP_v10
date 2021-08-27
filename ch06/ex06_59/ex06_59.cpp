/*
 ***************************************************
 *
 * ex06_59.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.59 (Computer Assisted Instruction:  Monitoring Student Performance)
 * Created: Aug 26,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <random>
#include <ctime>

int generateQuestion();

std::default_random_engine engine{static_cast<unsigned int>(time(0))};
std::uniform_int_distribution<int> randomInt{1, 9};

int main() {
	std::uniform_int_distribution<unsigned int> randomResponse{1, 4};
	int response;
	int comment;
	int nbrResponses{1};
	int nbrCorrect{0};

	int answer = generateQuestion();
	std::cin >> response;

	while (nbrResponses <= 10) {
		while (response != answer) {
			comment = randomResponse(engine);
			switch (comment) {
				case 1:
					std::cout << "No.  Please try again." << std::endl;
					break;
				case 2:
					std::cout << "Wrong.  Try once more." << std::endl;
					break;
				case 3:
					std::cout << "Dont' give up!" << std::endl;
					break;
				case 4:
					std::cout << "No.  Keep trying." << std::endl;
					break;
			}

			if (nbrResponses == 10) {
				if (static_cast<double>(nbrCorrect / nbrResponses < .75)) {
					std::cout << "Please ask your teacher for extra help" << std::endl;
				}
				else {
					std::cout << "Congradulations, you are ready to to to the next level!" << std::endl;
				}
				nbrResponses = 1;
				nbrCorrect = 0;
				answer = generateQuestion();
			}
			else {
				++nbrResponses;
			}

			std::cin >> response;
		} // end while (response)

		// correct answer
		comment = randomResponse(engine);
		switch (comment) {
			case 1:
				std::cout << "Very good!" << std::endl;
				break;
			case 2:
				std::cout << "Excellent!" << std::endl;
				break;
			case 3:
				std::cout << "Nice work!" << std::endl;
				break;	
			case 4:
				std::cout << "Keep up the good work!" << std::endl;
				break;
		}

		if (nbrResponses == 10) {
			if (static_cast<double>(nbrCorrect / nbrResponses < .75)) {
				std::cout << "Please ask your teacher for extra help" << std::endl;
			}
			else {
				std::cout << "Congradulations, you are ready to to to the next level!" << std::endl;
			}
			nbrResponses = 1;
			nbrCorrect = 0;
		}
		else {
			++nbrResponses;
			answer = generateQuestion();
			std::cin >> response;
		}
	}
}

int generateQuestion() {
	int x = randomInt(engine);
	int y = randomInt(engine);

	std::cout << "How much is " << x << " times " << y << " (-1 to quit):?" << std::endl;
	return x * y;
}