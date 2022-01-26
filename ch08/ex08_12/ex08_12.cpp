/*****************************************************************************
 * ex08_12.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 8.12 (Simulation:  The Tortoise and the Hare)
 * 
 * Jan 26, 2022
 * lvaughn
 ****************************************************************************/

#include <iostream>
#include <array>
#include <random>
#include <ctime>
#include <thread>         // std::this_thread::sleep_for
#include <chrono> 

// function prototypes
void moveTortoise(int* tortoisePosPtr);
void moveHare(int* harePosPtr);

std::default_random_engine rand_engine{static_cast<unsigned int>(time(0))};
std::uniform_int_distribution<unsigned int> randomInt{1, 50};

int main()
{
   
    //std::array<int, 71> position;

    int harePos{1};
    int tortoisePos{1};

    std::cout << "BANG !!!!!\n";
    std::cout << "AND THEY'RE OFF !!!!!\n";

    while (harePos <= 70 && tortoisePos <= 70)
    {
        moveTortoise(&tortoisePos);
        moveHare(&harePos);

        if (tortoisePos < harePos)
        {
            for (int pos{1}; pos < tortoisePos; ++pos)
            {
                std::cout << "-";
            }

            std::cout << "T";

            for (int pos{tortoisePos + 1}; pos < harePos; ++pos)
            {
                std::cout << "-";
            }

            std::cout << "H";

            for (int pos{harePos + 1}; pos <= 70; ++pos)
            {
                std::cout << "-";
            }

            std::cout << std ::endl;
        }
        else if (harePos < tortoisePos)
        {
            for (int pos{1}; pos < harePos; ++pos)
            {
                std::cout << "-";
            }

            std::cout << "H";

            for (int pos{harePos + 1}; pos < tortoisePos; ++pos)
            {
                std::cout << "-";
            }

            std::cout << "T";

            for (int pos{tortoisePos + 1}; pos <= 70; ++pos)
            {
                std::cout << "-";
            }

            std::cout << std ::endl;
        }
        else  // positions are tied
        {
            for(int pos{1}; pos < harePos; ++pos)
            {
                std::cout << "-";
            }

            std::cout << "OUCH!!!";

            for (int pos{harePos + 7}; pos <=70; ++pos)
            {
                std::cout << "-";
            }

            std::cout << std::endl;
        }


         std::this_thread::sleep_for (std::chrono::seconds(1));

    } // end while

    if (tortoisePos > harePos)
    {
        std::cout << "TORTOISE WINS!!!\n";
    }
    else if (harePos > tortoisePos)
    {
        std::cout << "Hare wins.  YUCK.\n";
    }
    else // they tied
    {
        std::cout << "It's a tie.\n";
    }

    std::cout << std::endl;

} // main



void moveTortoise(int* tortoisePosPtr)
{
    int randNbr = randomInt(rand_engine);
    int move{0};

    if (1 <= randNbr && randNbr <= 25)
    {
        move = 3;
    }
    else if (26 <= randNbr && randNbr <= 33)
    {
        move = -6;
    }
    else
    {
        move = 1;
    }

    *tortoisePosPtr += move;

    if (*tortoisePosPtr < 1)
    {
        *tortoisePosPtr = 1;
    }

} // end move tortoise

void moveHare(int* harePosPtr)
{
    int randNbr = randomInt(rand_engine);
    int move{0};

    if (1 <= randNbr && randNbr <= 19)
    {
        move = 0;
    }
    else if (20 <= randNbr && randNbr <=27)
    {
        move = 11;
    }
    else if (28 <= randNbr&& randNbr <= 35)
    {
        move = -9;
    }
    else if (36 <= randNbr && randNbr <= 45)
    {
        move = 1;
    }
    else
    {
        move = -2;
    }

    *harePosPtr += move;
    
    if (*harePosPtr < 1)
    {
        *harePosPtr = 1;
    }

} // end move hare
