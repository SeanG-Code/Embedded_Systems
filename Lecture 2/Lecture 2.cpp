// Lecture 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <utility>

int main()
{
    //Activity 3
    int a = 0, b = 0;
    char opp;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Enter your operator: ";
    std::cin >> opp;

    switch(opp)
    {
        case '+' :
            std::cout << "result: " << a + b;
            break;
        case '-' :
            std::cout << "result: " << a - b;
            break;
        default:
            std::cout << "result: Unknown operation";
    }

    //Activity 2
    /*int x = 0;
    std::cout << "Input a number: ";
    std::cin >> x;
    x % 2 == 0 ? (std::cout << "Even! " << "Divided by 2 = " << x / 2) : 
        (std::cout << "Odd! " << "Multiplied by 3 and sub 1 = " << (x * 3) - 1);*/

    //Activity 1
    /*int a = 0;
    int b = 0;

    std::cout << "Input two numbers: ";
    std::cin >> a >> b;

    std::swap(a, b);

    std::cout << "After swapping, your values are " << a << " and " << b;*/
}
