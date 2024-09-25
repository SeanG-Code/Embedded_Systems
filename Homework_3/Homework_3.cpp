// Homework_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void problemOne();
void problemTwo();
void problemThree();
void problemFour();
int power(int b, int e);
void problemFive();
bool palindrome(std::string s, int start, int end);
void problemSix();
void reverse_array(int array[], size_t arraySize);

int main() {
    char choice;

    std::cout << "\n\nWelcome!\n";
    std::cout << "1: Example Code\n"
        << "2: Learn about rand()\n"
        << "3: Pseudo Random\n"
        << "4: Recursion-1\n"
        << "5: Recursion-2\n"
        << "6: Reverse Array\n"
        << "E: Exit the Console\n";
    std::cout << "Please select problem you want to grade: ";
    std::cin >> choice;
    std::cout << "\n\n";

    switch (choice) {
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
    case 'E':return 0;
        break;
    default:
        std::cout << "\nInvalid Choice!\n\n";
        main();
    }
    main();
}

void problemOne() {
    srand(50);
    int nums[50];
    for (int i = 0; i < 50; i++) {
        nums[i] = 100 + (rand() % 101);
        std::cout << nums[i] << "   ";
    }
}

void problemTwo() {
    for (int i = 0; i < 30; i++) {
        std::cout << rand() << std::endl;
    }
}

void problemThree() {
    srand(3);
    int nums[50];
    for (int i = 0; i < 50; i++) {
        nums[i] = rand() % 101;
    }
    int size = sizeof(nums) / sizeof(int);

    // Sorting
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    
    // Outputting Orginal Array
    std::cout << "Original Array:\n";
    for (int i = 0; i < size; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    // Getting user input for k
    int k = 0;
    std::cout << "For what number k?: ";
    std::cin >> k;
    std::cout << "Deleting duplicates for the first " << k << " number unique elements\n";

    // Deleting duplicates up to k elements
    int newSize = size;
    for (int i = 0; i < k; ++i) {
        for (int j = i + 1; j < newSize; ++j) {
            if (nums[i] == nums[j]) {
                for (int z = j; z < newSize - 1; ++z) {
                    nums[z] = nums[z + 1];
                }
                --newSize;
                --j;
            }
        }
    }

    std::cout << "New Array:\n";
    for (int i = 0; i < newSize; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

void problemFour() {
    int b, e;
    std::cout << "Input the base number and the exponent" << std::endl;
    std::cin >> b >> e;
    std::cout << "Result = " << power(b, e) <<std::endl;
}

int power(int b, int e) {
    if (e == 0) {
        return 1;
    }
    return b * power(b, e - 1);
}

void problemFive() {
    std::string input;

    std::cout << "Please input a string: ";
    std::cin >> input;



    std::cout << (palindrome(input,0,input.length()-1) ? "Palindrome!" : "Not a palindrome...");
}

bool palindrome(std::string s, int start, int end) {
    if (start >= end) {
        return true;
    }
    else if (s[start] == s[end]) {
        palindrome(s, ++start, --end);
    }
    else
        return false;
}

void problemSix(){
    int nums[] = { 1,2,3,4,5,6,7,8,9 };
    size_t size = sizeof(nums) / sizeof(int);
    
    std::cout << "Original Array:\n";
    for (int i = 0; i < size; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    reverse_array(nums, size);

    std::cout << "Reversed Array:\n";
    for (int i = 0; i < size; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

void reverse_array(int array[], size_t arraySize) {
    int start = 0, end = arraySize - 1;
    int temp = 0;

    while (start < end) {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}