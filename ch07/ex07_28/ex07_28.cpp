/******************************************************************************
 * ex07_28.cpp
 * 
 * Deitel - C++ How to Program v10
 * Exercise 7.28 (Palindromic Setences)
 * 
 * Dec 25, 2021
 * lvaughn
 *****************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>


// function prototype
bool testPalindrome(std::string str, size_t lower, size_t upper);
std::string removeChars(std::string setence);

int main()
{
    std::string str1{ "radar" };
    std::string str2{ "Able was I ere I saw Elba" };
    std::string str3{ "red roses run no risk, sir, on nurses order."};
    std::string str4{ "This is not a palindrome!!!" };

    std::string condensedStr1 = removeChars(str1);
    std::string condensedStr2 = removeChars(str2);
    std::string condensedStr3 = removeChars(str3);
    std::string condensedStr4 = removeChars(str4);

    bool result = testPalindrome(condensedStr1, 0, condensedStr1.size() - 1);
    if (result == true)
    {
        std::cout << "\"" << str1 << "\"" << " is a palindrome" << std::endl;
    } 

    result = testPalindrome(condensedStr2, 0, condensedStr2.size() - 1);
    if (result == true)
    {
        std::cout << "\"" << str2 << "\"" << " is a palindrome" << std::endl;
    } 

    result = testPalindrome(condensedStr3, 0, condensedStr3.size() - 1);
    if (result == true)
    {
        std::cout << "\"" << str3 << "\"" << " is a palindrome" << std::endl;
    } 

    result = testPalindrome(condensedStr4, 0, condensedStr4.size() - 1);
    if (result == true)
    {
        std::cout << "\"" << str4 << "\"" << " is a palindrome" << std::endl;
    } 
    else
    {
        std::cout << "\"" << str4 << "\"" << " is not palindrome" << std::endl;
    }

  
}

std::string removeChars(std::string setence)
{
    std::string resultingStr = "";

    for (unsigned int i{0}; i < setence.size(); ++i)
    {
        if (setence[i] == ' ' || ispunct(setence[i]))
        {
            continue;
        }
        else
        {
            resultingStr += tolower(setence[i]);
        }
    }

    return resultingStr;
}

bool testPalindrome(std::string str, size_t lower, size_t upper)
{
    static bool result = true;

    if (lower > upper)
    {
        return result;
    }
    else if (str[lower] != str[upper])
    {
        return false;
    }
    else 
    {
        result = testPalindrome(str, lower + 1, upper - 1);
    }

    return result;
}