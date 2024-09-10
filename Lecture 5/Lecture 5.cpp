// Lecture 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void IncElem(int array[], int size);
int countRepeat(int array[], int size);
int square(int x)
{
    return x * x;
}
std::string square(std::string x)
{
    return "Welcome to " + x + " Square";
}
template <typename T> 
T add(T num1, T num2){
    return (num1 + num2);
}
template <typename T>
T maxx(T num1, T num2, T num3){
    if(num1 > num2)
    {
        if (num1 > num3)
            return num1;
        else
            return num3;
    }
    else // num2 > num1
    {
        if (num2 > num3)
            return num2;
        else
            return num3;
    }
}


int main()
{
    //Activity 1
    /*int nums[5] = {10, 20, 30, 40, 50};
    
    int size = (sizeof(nums) / sizeof(int));
    IncElem(nums,size);
    
    for (int i = 0; i < (sizeof(nums) / sizeof(int)); i++)
    {
        std::cout << nums[i] << " ";
    }
    */

    //Activity 2
    /*int nums[] = {1,1,2,4,6,6,6,7,9,9};
    int size = (sizeof(nums) / sizeof(int));
    std::cout << "Unique #s: " << countRepeat(nums, size);*/

    //Activity 3
    /*
    std::cout << square(5) << std::endl;
    std::cout << square("Times") << std::endl;
    */

    //Activity 4
    /*
    int result1;
    double result2;

    result1 = add<int>(2, 3);
    std::cout << result1 << std::endl;

    result2 = add<double>(2.2, 3.3);
    std::cout << result2 << std::endl;
    */

    //Activity 5
    std::cout << maxx<int>(2,15,8);

    return 0;
}

void IncElem(int array[], int size)
{
    for(int i = 0;i<size; i++)
    {
        array[i] += 10;
    }
}

int countRepeat(int array[], int size)
{
    int counter = 1;
    int current = array[0];
    for(int i = 0; i < size; i++)
    {
        if (current != array[i])
        {
            current = array[i];
            counter++;
        }
    }
    return counter;
}