/*****************************************************************************
 * ex07_13.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.13 (Deuplcate Elimination with array)
 * 
 * Compiled using GNU 11.2.1
 * 
 * Created: Dec 11,2021
 * Author:  Les Vaughn
 *****************************************************************************/

#include <iostream>
#include <array>
#include <algorithm>


int main() {
	const size_t arraySize{20};
	std::array<int, arraySize> values;
	unsigned int cntr{1};
	size_t pos{0};

	while (cntr <= 20) {
		std::cout << "Enter an integer between 10 and 100:  ";
		int nbr;
		std::cin >> nbr;

		if (nbr >= 10 && nbr <= 100) {
			bool found{false};

			for (auto item : values) {
				if (item == nbr) {
					found = true;
					break;
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

	for (auto item : values) {
		if (item > 0) {
			std::cout << item << std::endl;
		}
	}
} // end main