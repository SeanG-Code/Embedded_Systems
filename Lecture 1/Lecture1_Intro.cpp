// Lecture1_Intro.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

int main()
{
    int a, b, c;
    std::cout << "Please input 3 numbers: \n";
    std::cout << "First: ";
    std::cin >> a;
    std::cout << "Second: ";
    std::cin >> b;
    std::cout << "Third: ";
    std::cin >> c;

    std::cout << "\nSum:\t\t" << a + b + c << "\nAverage:\t" 
        << (a + b + c) / 3 << "\nProduct:\t" << a * b * c;

    return 0;
}
