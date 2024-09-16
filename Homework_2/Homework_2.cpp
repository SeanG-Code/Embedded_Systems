// Homework_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

void problemOne();
void problemTwo();
void problemThree();
void problemFour();
void problemFive();
void problemSix();

int main(){
    char choice;

    std::cout << "\n\nWelcome!\n";
    std::cout << "1: Robot Car\n"
        << "2: Size of Array\n"
        << "3: Shuffle Array\n"
        << "4: String Operations\n"
        << "5: Character Counter\n"
        << "6: Healthy Food\n"
        << "E: Exit the Console\n";
    std::cout << "Please select problem you want to grade: ";
    std::cin >> choice;
    std::cout << "\n\n";

    switch (choice){
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
    int Path[6][2] = { {0,0},
                     {1,0},
                     {1,1},
                     {0,1},
                     {0,2},
                     {2,2} };
    int x = 0;
    int y = 0;
    int i = 1;
    int end_x = 2;
    int end_y = 2;
    int forwardLook;
    int point = 2; // N = 1, E = 2, S = 3, W = 4

    while ((x != end_x) || (y != end_y)) {
        forwardLook = 1;
        // Y Change
        if (Path[i][0] != y) {
            //Y Down
            if(Path[i][0] >= y+1){
                //Check Direction
                if (point == 4) {
                    std::cout << "turn left\n";
                    point = 3;
                    //How many forward?
                    y = Path[i][0];
                    std::cout << "move forward by " << Path[i][0] - Path[i-1][0] << " grid\n";
                    i++;
                }
                else if (point == 2) {
                    std::cout << "turn right\n";
                    point = 3;
                    //How many forward?
                    y = Path[i][0];
                    std::cout << "move forward by " << Path[i][0] - Path[i - 1][0] << " grid\n";
                    i++;
                }
                else {
                    std::cout << "This shouldn't happen\n";
                    return;
                }
            }
            //Y Up
            else {
                //Check Direction
                if (point == 4) {
                    std::cout << "turn right\n";
                    point = 1;
                    //How many forward?
                    y = Path[i][0];
                    std::cout << "move forward by " << Path[i][0] + Path[i - 1][0] << " grid\n";
                    i++;
                }
                else if (point == 2) {
                    std::cout << "turn left\n";
                    point = 1;
                    //How many forward?
                    y = Path[i][0];
                    std::cout << "move forward by " << Path[i][0] + Path[i - 1][0] << " grid\n";
                    i++;
                }
                else {
                    std::cout << "This shouldn't happen\n";
                    return;
                }

            }
        }
        //X Change
        else{
            //X Left
            if (Path[i][1] <= x - 1) {
                //Check Direction
                if (point == 1) {
                    std::cout << "turn left\n";
                    point = 4;
                    //How many forward?
                    x = Path[i][1];
                    std::cout << "move forward by " << Path[i][1] + Path[i - 1][1] << " grid\n";
                    i++;
                }
                else if (point == 3) {
                    std::cout << "turn right\n";
                    point = 4;
                    //How many forward?
                    x = Path[i][1];
                    std::cout << "move forward by " << Path[i][1] + Path[i - 1][1] << " grid\n";
                    i++;
                }
                else {
                    std::cout << "This shouldn't happen\n";
                    return;
                }
            }
            //X Right
            else {
                //Check Direction
                if (point == 1) {
                    std::cout << "turn right\n";
                    point = 2;
                    //How many forward?
                    x = Path[i][1];
                    std::cout << "move forward by " << Path[i][1] - Path[i - 1][1] << " grid\n";
                    i++;
                }
                else if (point == 3) {
                    std::cout << "turn left\n";
                    point = 2;
                    //How many forward?
                    x = Path[i][1];
                    std::cout << "move forward by " << Path[i][1] - Path[i - 1][1] << " grid\n";
                    i++;
                }
                else {
                    std::cout << "This shouldn't happen\n";
                    return;
                }
            }
        }
       //std::cout << "Current Coords : y = " << y << " x = " << x << " Looking = " << point << std::endl;
    }
    //std::cout << "Arrived!\n"<<x<<y;
}



void problemTwo() {
    int num[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
    int size = sizeof(num) / sizeof(int);
    for (int i = size / 2; i < size; i++) {
        std::cout << num[i] <<" ";
    }
}

void problemThree() {
    int num[] = { 12,21,37,44,57,61,78,82,95,10 };
    int num2[10];
    int size = sizeof(num2) / sizeof(int);
    int count = 0;
    for (int i = 0; i < 5; i++) {
        num2[count] = num[i];
        count += 2;
    }
    count = 1;
    for (int i = 5; i < 10; i++) {
        num2[count] = num[i];
        count += 2;
    }
    for (int i = 0; i < size; i++) {
        std::cout << num2[i] << " ";
    }
}

void problemFour() {
    std::string sentence = "I like ice cream.";
    std::string sentence2 = "Haha, ice cream.";
    char checkChar = 'I';
    std::cout << (sentence[0] == checkChar) << std::endl;
    std::cout << (sentence2[0] == checkChar) << std::endl;
}

void problemFive() {
    std::string sentence = R"(The curious cat jumped onto the windowsill,
        pawing at the dancing shadows.Outside, the stars twinkled,
        while the moon cast a silvery glow. In the distance, a lone wolf
        howled, breaking the serene silece of the night.)";
    char checkChar = 'i';
    int count = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'i')
        {
            count++;
        }
    }
    std::cout << count << std::endl;
}

void problemSix() {
    std::string healthy = "aAbeQy";
    std::string mine = "aBsabdfdhjkdeeehfdjQQurheystsuFFGTyqQfdkslfbifheytfmkBBDCSHjk";

    char check = '0';
    int count = 0;

    for (int i = 0; i < healthy.length(); i++) {
        check = healthy[i];
        for (int j = 0; j < mine.length(); j++) {
            if (check == mine[j])
                count++;
        }
    }

    std::cout << "Number of Healthy = " << count;
}