/*****************************************************************************
 * ex08_09.cpp
 *
 * Deitel - C++ How to Program v10
 * Exercise 8.9 (Write C++ Statements)
 *
 * Dec 27, 2021
 * lvaughn
 *****************************************************************************/

#include <iostream>

int main()
{
    //  a)  Declare the variable charPtr to be a pointer to an object of type char
    char* charPtr{ nullptr };

    //  b)  Assign the address of variable var2 to pointer variable charPtr
    char var2{ 'm' };
    charPtr = &var2;

    //  c)  Display the value of the object pointed to by charPtr.
    std::cout << "The value of the object pointed to by charPtr is:  "
        << *charPtr << std::endl;

    //  d)  Assign the value of the object pointed to by charPtr to variable var1
    char var1;
    var1 = *charPtr;

    //  e)  Display the value of var1
    std::cout << "var1 = " << var1 << std::endl;

    //  f)  Display the value of var2
    std::cout << "var2 = " << var2 << std::endl;

    //  g)  Display the address stored in charPtr.  Is the address displayed the
    //      same as var1's?  (No, charPtr still points to var2)
    std::cout << "The address stored in charPtr is:  "
        << static_cast<void*>(charPtr) << std::endl;
    std::cout << "The var1's address is:  " << static_cast<void*>(&var1)
        << std::endl;
}