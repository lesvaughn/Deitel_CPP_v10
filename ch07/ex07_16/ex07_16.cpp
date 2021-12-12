/******************************************************************************
 * ex07_16.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 7.16 (Dice Rolling)
 * 
 * Compiled using GNU 11.2.1
 * 
 * Created: Dec 12, 2021
 * Author:  Les Vaughn
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>

int main()
{
    std::default_random_engine engine{static_cast<unsigned int>(time(0))};
    std::uniform_int_distribution<unsigned int> randomInt{1, 6};

    const size_t arraySize{13};
    std::array<int, arraySize> roll;

    for (unsigned int i{1}; i <= 36'000'000; ++i)
    {
        unsigned int die1 = randomInt(engine);
        unsigned int die2 = randomInt(engine);
        size_t sum = die1 + die2;
        ++roll[sum];
    }

    std::cout << std::setw(4) << "Roll" << std::setw(12) << "Number"
        << std::endl;

    for (unsigned int i{2}; i < arraySize; ++i)
    {
        std::cout << std::setw(4) << i << std::setw(12) << roll[i] << std::endl;
    }
}