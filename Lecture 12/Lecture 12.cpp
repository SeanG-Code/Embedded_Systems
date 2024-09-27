// Lecture 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void MoreFruit(int* pointer) {
    *pointer = *pointer + 5;
}

int main()
{
    //Activity 1
    /*
    int num = 5;
    int* fruitptr = &num;
    std::cout << *fruitptr << std::endl;
    if (*fruitptr % 2 == 0)
        std::cout << "Even\n";
    else
        std::cout << "Odd\n";
        */

    //Activity 2
    /*
    int num[7] = { 100,23,14,56,55,106,37 };
    int* p;
    p = &num[2];
    std::cout << *p << std::endl;;
    p = num + 1;
    std::cout << *p << std::endl;
    p = p + 2;
    std::cout << *p << std::endl;
    */

    //Activiy 3
    int fruit = 0;
    int* fruitptr = &fruit;
    MoreFruit(fruitptr);
    std::cout << fruit << std::endl;
}