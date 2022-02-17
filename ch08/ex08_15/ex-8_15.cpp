/*****************************************************************************
 * ex08_15.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 8.15
 * 
 * Jan 26, 2020
 * lvaughn
 ****************************************************************************/

#include <iostream>
#include <array>

int main()
{
    //-----------------------------------------------------------------------
    // INPUT/OUTPUT OPERATIONS

    // Read a word from the keyboard into a specific location in memory
    const int read{ 10 }; 

    // Write a word from a specific location in memory to the screen          
    const int write{ 11 };  

    //----------------------------------------------------------------------
    // LOAD AND STORE OPERATIONS

    // Load a word from a specific location in memory into the accumulator
    const int load{ 20 };

    // Store a word from the accumulator into a specific location in memory
    const int store{ 21 };

    //-----------------------------------------------------------------------
    // ARITHMETIC OPERATIONS

    // Add a word from a specific location in memory to the word in the
    // accumulator (leave result in accumulator)
    const int add{ 30 };

    // Subtract a word from a specific location in memory from the word
    // in the accumulator (leave result in accumulator)
    const int subtract{ 31 };

    // Divide a word from a specific location in memory into the word in 
    // the accumulator (leave result in accumulator)
    const int divide{ 32 };

    // Multiple a word from a specific location in memory into the word in 
    // the accumulator (leave result in accumulator)
    const int multiply{ 33 };

    //-----------------------------------------------------------------------
    // TRANSFER-OF-CONTROL OPERATIONS

    // Branch to a specific location in memory
    const int branch{ 40 }; 

    // Branch to a specific location in memory if the accumulator is negative    
    const int branchneg{ 41 };

    // Branch to a specific location in memory if the accumulator is zero   
    const int branchzero{ 42 };

    // Halt - the program has completed its task
    const int halt{ 43 };
    //-----------------------------------------------------------------------


    std::array<int, 10> location{ 1006, 2006, 3007, 2107, 1107, 4300 };
    size_t instruction_number{ 0 };
    int memory_address{ 0 };
    int accumulator{ 0 };

    int operation_code = location[instruction_number] / 100;

    while (operation_code != 43)    // indefinite loop unti43
    {
        switch (operation_code)
        {
            case read:
                std::cout << "Enter a number: ";
                memory_address = location[instruction_number] % 100;
                std::cin >> location[memory_address];
                instruction_number = 1;
                break;

            case load:
                memory_address = location[instruction_number] % 100;

                if (location[memory_address] != -1)
                {
                    accumulator = location[memory_address];
                    instruction_number = 2;
                }
                else
                {
                    instruction_number = 4;
                }
                break;

            case add:
                memory_address = location[instruction_number] % 100;
                accumulator += location[memory_address];
                instruction_number = 3;
                break;

            case store:
                memory_address = location[instruction_number] % 100;
                location[memory_address] = accumulator;
                accumulator = 0;
                instruction_number = 0;
                break;
            
            case write:
                memory_address = location[instruction_number] % 100;
                std::cout << "The sum of the numbers is "
                          << location[memory_address] % 100 << std::endl;
                instruction_number = 5;
                break;

            case halt:

                break;
                

            default:
                std::cout << "Invalid process code!" << std::endl;

            operation_code = location[instruction_number] / 100;


        }

        operation_code = location[instruction_number] / 100;       
    }

    std::cout << "Successful program termination." << std::endl;

}
