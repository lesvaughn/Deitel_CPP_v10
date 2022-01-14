/*****************************************************************************
 * ex08_08.cpp
 *
 * Deitel - C++ How to Program v10
 * Exercise 8.8 (Write C++ Statements)
 *
 * Dec 26, 2021
 * lvaughn
 *****************************************************************************/

#include <iostream>
#include <array>

int main()
{
    //  a)  Declare a built-in array of type unsigned int called values with
    //      five elements, and initialize the elements to the even integers
    //      from 2 to 10.  Assume the constant SIZE has been defined as 5.
    const unsigned int size{ 5 };
    unsigned int values[5] = { 2, 4, 6, 8, 10 };

    //  b)  Declare a pointer vPtr that points to an object of type 
    //      unsigned int
    unsigned int* vPtr{ nullptr };

    //  c)  Use a for statement to display the elements of built-in array
    //      values using array subscript notation
    for (unsigned int i{ 0 }; i < size; ++i)
    {
        std::cout << values[i] << "  ";
    }
    std::cout << std::endl;

    //  d)  Write two separate statements that assign the starting address
    //      of built-in array values to pointer vPtr.
    vPtr = values;
    std::cout << vPtr << std::endl;
    vPtr = &values[0];
    std::cout << vPtr << std::endl;

    //  e)  Use a for  statement to display the elements of built-in array
    //      values using pointer/offset notation.
    for (unsigned int i{ 0 }; i < size; ++i)
    {
        std::cout << *(vPtr + i) << "  ";
    }

    std::cout << std::endl;

    //  f)  Use a for statement to display the elements of built-in array
    //      values using pointer/offset notation with the built-in array's
    //      name as the pointer
    for (unsigned int i{ 0 }; i < size; ++i)
    {
        std::cout << *(values + i) << "  ";
    }

    std::cout << std::endl;

    //  g)  Use a for statement to display the elements of built-in array 
    //      values by subscripting the pointer to the built-in array.
    for (unsigned int i{ 0 }; i < size; ++i)
    {
        std::cout << vPtr[i] << "  ";
    }

    std::cout << std::endl;

    //  h)  Refer to the fifth element of values using array subscript
    //      notation, pointer/offset notation with the built-in array name's
    //      as the pointer, pointer subscript notation and pointer/offset
    //      notation.
    std::cout << values[4] << std::endl;
    std::cout << *(values + 4) << std::endl;
    std::cout << vPtr[4] << std::endl;
    std::cout << *(vPtr + 4) << std::endl;

    //  i)  vPtr + 3 points to address of the fourth element of the array
    //      values
    std::cout << (vPtr + 3) << std::endl;

    //  j)  Assuming vPtr points to values[4], vPtr -= 4 point to array
    //      element 0 (zero).  The value at array[0] is 2

    vPtr = &values[4];
    vPtr -= 4;
    std::cout << *vPtr << std::endl;
}