/*
 ***************************************************
 *
 * ex06_25.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.25 (Calculating Number of Minutes)
 * 
 * Created: Aug 19,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int elapsedMinutes( unsigned int, unsigned int, unsigned int );


int main()
{
	std::cout << "For day 1:  Enter a day of the month, a hour of the day, and a minute of the hour";
	std::cout << "\neach separated by a space:  ";
	int day1, hour1, minute1;
	std::cin >> day1 >> hour1 >> minute1;

	std::cout << "For day 2:  Enter a day of the month, a hour of the day, and a minute of the hour";
	std::cout << "\neach separated by a space:  ";
	int day2, hour2, minute2;
	std::cin >> day2 >> hour2 >> minute2;

	int day1ElapsedMinutes = elapsedMinutes( day1, hour1, minute1 );
	int day2ElapsedMinutes = elapsedMinutes( day2, hour2, minute2 );

	std::cout << "The minutes elapsed since the beginning of the month for day 1 are:  "
				 << day1ElapsedMinutes << std::endl;

	std::cout << "The minutes elapsed since the beginning of the month for day 2 are:  "
				 << day2ElapsedMinutes << std::endl;
	
	if ( day1ElapsedMinutes > day2ElapsedMinutes ) {
		std::cout << "The time at day 1 exceeded the time at day 2 by " << day1ElapsedMinutes -
			day2ElapsedMinutes << " minutes." << std::endl;
	}
	else if ( day2ElapsedMinutes > day1ElapsedMinutes ) {
		std::cout << "The time at day 2 exceeded the time at day 1 by " << day2ElapsedMinutes -
			day1ElapsedMinutes << " minutes." << std::endl;
	}
	else {
		std::cout << "These two times are identical. " << std::endl;
	}
}

int elapsedMinutes( unsigned int days = 0, unsigned int hours = 0, unsigned int minutes = 0 ) {
	return ( days * 24 * 60 ) + ( hours * 60 ) + minutes;
} 