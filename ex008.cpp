//
// Created by Riya on 11/28/2021.
//

/*
00/00/2021
Riya Singh
The purpose of this program is to add two numbers
*/

#include <iostream> //allows program to perform input and output
#include <string>

int main()
{

    int num;
    std::cin >> num;
    std::string str = "The Value ";
    int test = num%2;
    if(test == 0)
        std::cout << str << num << " is an even number." << std::endl;
    else
        std::cout << str << num << " is an odd number." << std::endl;
}

