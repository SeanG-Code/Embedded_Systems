// Lecture 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Activity 6
    int battleship[10][10] = {
        {0,0,2,0,0,0,0,0,0,0},
        {1,1,1,1,1,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0},
        {0,1,1,1,0,0,0,2,0,0},
        {0,0,0,0,0,1,1,1,1,1},
        {0,0,1,0,0,0,0,1,0,0},
        {1,0,1,0,0,0,1,1,1,0},
        {1,1,1,2,0,0,0,0,0,0},
        {1,0,1,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0},
    };
    //Activity 5.5
    /*
    int array[2][3] = {{33,45,68},
                       {23,10,15}};
    for(int i=0;i<2;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }*/

    //Activity 5
    /*int pass = 0, enter = 0;
    std::cout << "Enter a 3 digit password: ";
    std::cin >> pass;
    while(true)
    {
        std::cout << "What is your password?: ";
        std::cin >> enter;
        if (enter == pass)
        {
            std::cout << "Welcome Back!";
            break;
        }
    }*/

    //Activity 4
    /*int x = 9875;
    int value = 0;
    while(x!=0)
    {
        value = value + (x % 10);
        x = x / 10;
    }
    std::cout << value;*/

    //Activity 3
    /*int x = 3;
    for (int num = 4; num < 21; num++) 
    {
        x = x + num;
    }
    std::cout << x;*/

    //Acitivity 2
    //for (int counter = 1; counter < 6; counter++) { std::cout << counter << std::endl; }

    //Activity 1
    /*int counter = 3;
    while (counter < 11) {std::cout <<counter++<<" ";}*/
}