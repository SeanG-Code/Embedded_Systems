// Lecture 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

void Write_a_txt_file() {
    std::ofstream MyFile("CookiePieRecipe.txt");
    if (MyFile.is_open()) {
        MyFile << "Toss some cookie dough on a pie, ...";
        MyFile.close();
    }
    std::cout << "Your recipe saved." << std::endl;
}

void Read_a_txt_file() {
    std::string myText;
    std::ifstream MyReadFile("CookiePieRecipe.txt");
    while (getline(MyReadFile, myText)) {
        std::cout << myText;
    }
    MyReadFile.close();
}

void Write2DArray_2_CSV() {
    int rows = 3, cols = 3;
    int array[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    std::ofstream file("File_operation_output.csv");
    if (file.is_open()) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                file << array[i][j];
                if (j < cols - 1) {
                    file << ",";
                }
            }
            file << "\n";
        }
        file.close();
        std::cout << "2D array saved to output.csv" << std::endl;
    }
}

int main()
{
    Write2DArray_2_CSV();
}
