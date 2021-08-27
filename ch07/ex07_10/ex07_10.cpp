/*
 ***************************************************
 *
 * ex07_10.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.10 (Server Income Ranges)
 * Created: Aug 27,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <string>
#include <array>

int main() {
	std::array<int, 11> income_range{0};

	std::cout << "Enter the currency:  ";
	std::string currency;
	std::cin >> currency;

	std::cout << "Enter the servers hourly wage:  ";
	double wage;
	std::cin >> wage;	

	std::cout << "Enter a server's number of hours worked (-1 to quit):  ";
	double hoursWorked;
	std::cin >> hoursWorked;

	while (hoursWorked != -1) {
		std::cout << "Enter the server's total tips:  "; 
		double tips;
		std::cin >> tips;

		int salary = static_cast<int>(hoursWorked * wage + tips);

		if (salary >= 100) {
			++income_range[10];
		}
		else if (salary >= 90) {
			++income_range[9];
		}
		else if (salary >= 80) {
			++income_range[8];
		}
		else if (salary >= 70) {
			++income_range[7];
		}
		else if (salary >= 60) {
			++income_range[6];
		}
		else if (salary >= 50) {
			++income_range[5];
		}
		else if (salary >= 40) {
			++income_range[4];
		}
		else if (salary >= 30) {
			++income_range[3];
		}
		else if (salary >= 20) {
			++income_range[2];
		}

	std::cout << "Enter a server's number of hours worked (-1 to quit):  ";
	std::cin >> hoursWorked;
	} // end while(hoursWorked)

	std::cout << currency << "\t" << "Nbr Servers" << std::endl;
	std::cout << "20-29:\t" << income_range[2] << std::endl;
	std::cout << "30-39:\t" << income_range[3] << std::endl;
	std::cout << "40-49:\t" << income_range[4] << std::endl;
	std::cout << "50-59:\t" << income_range[5] << std::endl;
	std::cout << "60-69:\t" << income_range[6] << std::endl;
	std::cout << "70-79:\t" << income_range[7] << std::endl;
	std::cout << "80-89:\t" << income_range[8] << std::endl;
	std::cout << "90-99:\t" << income_range[9] << std::endl;
	std::cout << "100 and over:\t" << income_range[10];
}