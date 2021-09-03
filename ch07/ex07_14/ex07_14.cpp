/*
 ***************************************************
 *
 * ex07_14.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.14 (Duplicate Eliminatin with vector)
 * Created: Aug 29,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> values;

	unsigned int cntr{0};

	while (cntr < 20) {
		std::cout << "Enter an integer between 10 and 100 inclusive:  ";
		int nbr;
		std::cin >> nbr;

		if (nbr >=10 && nbr <= 100) {
			bool found{false};

			for (int item : values) {
				if (item == nbr) {
					found = true;
				}
			}

			if (found == false) {
				values.push_back(nbr);
			}

			++cntr;
		}
		else {
			std::cout << "Invalid number - try again." << std::endl;
		}

	} // end while(cntr)

	std::sort(values.begin(), values.end());

	for (int item : values) {
		std::cout << item << std::endl;
	}
}
