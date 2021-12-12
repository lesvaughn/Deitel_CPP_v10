 /*****************************************************************************
 * ex07_10.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.10 (Server Income Ranges)
 * 
 * Compiled using GNU 11.2.1
 * 
 * Created: Dec 11,2021
 * Author:  lvaughn
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <array>

int main() {
	const unsigned int arraySize{ 11 };
	std::array<int, arraySize> income_range{0};

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

		if (salary <= 99)
		{
			++income_range[salary / 10];
		}
		else
		{
			++income_range[10];
		}

		std::cout << "Enter a server's number of hours worked (-1 to quit):  ";
		std::cin >> hoursWorked;

	} // end while(hoursWorked)

	std::cout << currency << std::setw(13) << "Nbr Servers" << std::endl;

	for (unsigned int i{ 2 }; i < arraySize; ++i)
	{
		if (i <= 9)
		{
		std::cout << i << "0-" << i << "9:" << std::setw(12) << income_range[i]
			<< std::endl;
		}
		else
		{
			std::cout << "100 and over:" << std::setw(5) << income_range[10]
				<< std::endl;
		}
	}

} // end main