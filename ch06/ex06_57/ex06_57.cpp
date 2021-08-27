/*
 ***************************************************
 *
 * ex06_57.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.57 (Computer Assisted Instruction)
 * Created: Aug 23,2021
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
	int answer = generateQuestion();
	int response;
	std::cin >> response;

	while(response != -1) {
		while (response != answer) {
			std::cout << "No.  Please try again." << std::endl;
			std::cin >> response;
		}

		std::cout << "Very good!" << std::endl;
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