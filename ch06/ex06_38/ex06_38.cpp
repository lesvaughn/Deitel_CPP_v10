/*
 ***************************************************
 *
 * ex06_38.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.38 (Towers of Hanoi)
 * 
 * Created: Aug 23,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <string>

void towersOfHanoi(int, int, int, int);

int main() {
	towersOfHanoi(3, 1, 3, 2);
}

void towersOfHanoi(int nbrDisks, int initialPeg, int destPeg, int tempPeg) {
	if (nbrDisks == 1) {
		std::cout << initialPeg << " -> " << destPeg << std::endl;
		return;
	}
	else {
		towersOfHanoi(nbrDisks - 1, initialPeg, tempPeg, destPeg);
		std::cout << initialPeg << " -> " << destPeg << std::endl;
		towersOfHanoi(nbrDisks - 1, tempPeg, destPeg, initialPeg);
	}
}
 