/*
 ***************************************************
 *
 * ex06_26.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.26 (Celsius and Fahrenheit Temperatures)
 * 
 * Created: Aug 20,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>

double celsius( double );
double fahrenheit( double );

int main()
{
	std::cout << "\nCelsius" << std::setw(15) << "Fahrenheit" << std::setw(20) << "Fahrenheit"
				 << std::setw(12) << "Celsius"  << std::endl;

	int fahenheitTemp{ 32 };

	for ( int i{0}; i <= 100; ++i ) {
		std::cout << std::setw(7) << i << std::setw(15) << std::setprecision(1) << std::fixed
					 << fahrenheit( static_cast<double>(i) );
					 
		std::cout << std::setw(20) << fahenheitTemp << std::setw(12) << std::setprecision(1) 
					 << std::fixed << celsius( static_cast<double>(fahenheitTemp) ) << std::endl;

		++fahenheitTemp;
	}

	while ( fahenheitTemp <= 212 ) {
		std::cout << std::setw(42) << fahenheitTemp << std::setw(12) << std::setprecision(1) 
					 << std::fixed << celsius( static_cast<double>(fahenheitTemp) ) << std::endl;

		++fahenheitTemp;
	}
}

double celsius( double fTemp ) {
	return ( fTemp - 32.0 ) / 1.8;
}	

double fahrenheit( double cTemp ) {
	return ( cTemp * 1.8 ) + 32.0;
}