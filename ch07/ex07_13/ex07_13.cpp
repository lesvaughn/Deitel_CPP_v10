/*
 ***************************************************
 *
 * ex07_13.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.13 (Deuplcate Elimination with array)
 * Created: Aug 28,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <array>
#include <algorithm>


int main() {
	std::array<int, 20> values;
	unsigned int cntr{1};
	size_t pos{0};

	while (cntr <= 20) {
		std::cout << "Enter an integer between 10 and 100:  ";
		int nbr;
		std::cin >> nbr;

		if (nbr >= 10 && nbr <= 100) {
			bool found{false};

			for (int item : values) {
				if (item == nbr) {
					found = true;
				}
			}

			if (found == false) {
				values[pos] = nbr;
				++pos;
			}

			++cntr;
		}
		else {
			std::cout << "Invalid number - try again." << std::endl;
		}
	} // end while(cntr)

	std::sort(values.begin(), values.end());

	for (int item : values) {
		if (item > 0) {
			std::cout << item << std::endl;
		}
	}


}