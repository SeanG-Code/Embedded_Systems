// Homework_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

void problemOne();
void problemTwo();
void problemThree();
void problemFour();
void problemFive();
void problemSix();
void problemSeven();
void problemEight();

int main()
{
    char choice;

    std::cout << "\n\nWelcome!\n";
    std::cout << "1: Explore Math Library\n"
        << "2: Angles for Triangles\n"
        << "3: Leap Year\n"
        << "4: Area of a Rectangle\n"
        << "5: Sum of Digits\n"
        << "6: Reverse an interger\n"
        << "7: Palindrome\n"
        << "8: Calculate Sum A[]\n"
        << "E: Exit the Console\n";
    std::cout << "Please select problem you want to grade: ";
    std::cin >> choice;
    std::cout << "\n\n";
    
    switch(choice)
    {
    case '1':problemOne();
        break;
    case '2':problemTwo();
        break;
    case '3':problemThree();
        break;
    case '4':problemFour();
        break;
    case '5':problemFive();
        break;
    case '6':problemSix();
        break;
    case '7':problemSeven();
        break;
    case '8':problemEight();
        break;
    case 'E':return 0;
        break;
    default:
        std::cout << "\nInvalid Choice!\n\n";
        main();  
    }
    main();
}

void problemOne()
{
    std::cout << "Problem 1!: \n";
    std::cout << std::max(6, 9) << " " << std::min(6, 9) << std::endl;
    std::cout << std::sqrt(64) << std::endl;
    std::cout << std::round(5.67) << std::endl;
    std::cout << std::log(2) << std::endl;
    
    std::cout << "power of two" << std::endl;
    for(int i=0;i<15;i++)
    {
        std::cout << std::pow(2, i) << '\t';
    }

    int number;
    std::cout << "\nPlease input a number: ";
    std::cin >> number;
    if (number == 0)
    {
        std::cout << "Not a power of 2!";
        return;
    }
    while (number != 1) 
    {
        if(number % 2 != 0)
        {
            std::cout << "Not a power of 2!";
            return;
        }
        number = number / 2;
    }
    std::cout << "Power of 2!";
}

void problemTwo()
{
    int angleOne = 0;
    int angleTwo = 0;
    int angleThree = 0;

    std::cout << "Problem 2!: \n";
    std::cout << "Please enter 3 angles: \n";
    std::cout << "Angle 1: ";
    std::cin >> angleOne;
    std::cout << "Angle 2: ";
    std::cin >> angleTwo;
    std::cout << "Angle 3: ";
    std::cin >> angleThree;
    
    if (angleOne + angleTwo + angleThree == 180)
        std::cout << "Valid Triangle!";
    else
        std::cout << "Invalid Triangle!";
}

void problemThree()
{
    int year = 0;

    std::cout << "Problem 3!: \n";
    std::cout << "Please enter a year: ";
    std::cin >> year;
    
    if (year % 4 == 0)
        if (year % 100 == 0)
            if (year % 400 == 0)
                std::cout << "Leap Year!";
            else
                std::cout << "No Leap Year!";
        else
            std::cout << "Leap Year!";
    else
        std::cout << "No Leap Year!";
}

void problemFour()
{
    float length = 0;
    float width = 0;

    std::cout << "Problem 4!: \n";
    std::cout << "Welcome to the Rectangle Area Calculator!\n";
    std::cout << "Please enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Please enter the width of the rectangle: ";
    std::cin >> width;
    std::cout << "The area of the rectangle is: " << length * width << "\n";
}

void problemFive()
{
    int number = 0;
    int counter = 0;

    std::cout << "Problem 5!: \n";
    std::cout << "Please enter an integer: ";
    std::cin >> number;

    if(number == 0)
    {
        std::cout << "Digits = 0";
        return;
    }
    while (number != 0)
    {
        counter = counter + (number % 10);
        number /= 10;
    }
    std::cout << "Digits = " << counter;
}

void problemSix()
{
    int number = 0;
    int reverse = 0;

    std::cout << "Problem 6!: \n";
    std::cout << "Please enter an integer: ";
    std::cin >> number;

    if (number == 0)
    {
        std::cout << "Reversed = 0";
        return;
    }
    while(number != 0)
    {
        reverse = reverse + (number % 10);
        reverse *= 10;
        number /= 10;
    }
    reverse /= 10;
    std::cout << "Reversed = " << reverse;
}

void problemSeven()
{
    int number = 0;
    int orignalNumber = 0;
    int reverse = 0;

    std::cout << "Problem 7!: \n";
    std::cout << "Please enter an integer: ";
    std::cin >> number;
    orignalNumber = number;

    if (number == 0)
    {
        std::cout << "Reversed = 0";
        return;
    }
    while (number != 0)
    {
        reverse = reverse + (number % 10);
        reverse *= 10;
        number /= 10;
    }
    reverse /= 10;

    if (orignalNumber == reverse)
        std::cout << "Palindrome!";
    else
        std::cout << "No Paldindrome!";
}

void problemEight()
{
    int number = 0;

    std::cout << "Problem 8!: \n";
    int A[20] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181 };
    std::cout << "Array: ";
    for (int i = 0; i < (sizeof(A) / sizeof(int)); i++)
    {
        std::cout << A[i] << " ";
    }

    for (int i = 0; i < (sizeof(A) / sizeof(int)); i++)
    {
        number += A[i];
    }
    std::cout << "\nSum = " << number;
}