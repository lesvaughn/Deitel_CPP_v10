/*
 ***************************************************
 *
 * ex06_58.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.58 (Computer Assisted Instruction:  Reducing Student Fatigue)
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
	int answer = generateQuestion();
	int response;
	int comment;
	std::cin >> response;

	while(response != -1) {
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

			std::cin >> response;
		}

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

		answer = generateQuestion();
		std::cin >> response;
	}
}

int generateQuestion() {
	int x = randomInt(engine);
	int y = randomInt(engine);

	std::cout << "How much is " << x << " times " << y << " (-1 to quit):?" << std::endl;
	return x * y;
}