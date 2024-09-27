#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib> // For rand() and srand()
// No additional libraries should be included here. 

int find_unique_hashtags(std::string hashtags);
void print_pattern(int n);
float patient_health_data(int d1[], int d2[], int m, int n);
void airpalne_map();
std::string gettime();//Return a string of time 

int main()
{
    //Example testing code - Q1
    std::cout << find_unique_hashtags("ABARECCD") << std::endl;
    //Example testing code - Q2
    print_pattern(9);
    //Example testing code - Q3
    int d1[3] = { 107, 118, 130 };
    int d2[2] = { 120, 150 };
    int m = 3;
    int n = 2;
    std::cout << patient_health_data(d1, d2, m, n) << std::endl;
    //Example testing code - Q4
    airpalne_map();

    // You can add your own testing code but please delete 
    // all code you write in the main function when submitting.
}

int find_unique_hashtags(std::string hashtags)
{
    int longest = 0;
    //your code here
    int hold = 0;
    for (int i = 0; i < hashtags.size(); i++) {
        hold = 0;
        for (int j = i; j < hashtags.size(); j++) {
            bool duplicate = false;
            for (int k = i; k < j; k++) {
                if (hashtags[j] == hashtags[k]) {
                    duplicate = true;
                    break;
                }
            }
            if (duplicate)
                break;
            hold = j - i + 1;
            if (hold > longest)
                longest = hold;
        }
    }
    return longest;
}

void print_pattern(int n)
{
    //your code here
    int hold = n;
    int start = 1;
    for (int j = 0; j < n; j++) {
        for (int i = hold-1; i > 0; i--) {
            std::cout << "  ";
        }
        for (int i = 1; i < start+1; i++) {
            std::cout << i << " ";
        }
        start++;
        hold--;
        std::cout << std::endl;
    }
}


float patient_health_data(int d1[], int d2[], int m, int n)
{
    float median = 0.0;
    //your code here

    //if odd
    if ((m + n) % 2 == 1) {
        int middleIndex = (m + n) / 2;
        int index1 = 0;
        int index2 = 0;
        int findIndex = 0;

        while (true) {
            //compare both arrays and pick the smaller element
            if (index1 < m && (index2 >= n || d1[index1] < d2[index2])) {
                if (findIndex == middleIndex)
                    return d1[index1];
                index1++;
            }
            else if (index2 < n) {
                if (findIndex == middleIndex)
                    return d2[index2];
                index2++;
            }
            findIndex++;
        }
    }

    //if even
    if ((m + n) % 2 == 0) {
        int middleIndex1 = (m + n) / 2 - 1;
        int middleIndex2 = (m + n) / 2;
        int index1 = 0;
        int index2 = 0;
        int findIndex = 0;
        int val1 = 0, val2 = 0;

        while (true) {
            // Compare both arrays and pick the smaller element
            if (index1 < m && (index2 >= n || d1[index1] < d2[index2])) {
                if (findIndex == middleIndex1)
                    val1 = d1[index1];
                if (findIndex == middleIndex2)
                    val2 = d1[index1];
                index1++;
            }
            else if (index2 < n) {
                if (findIndex == middleIndex1)
                    val1 = d2[index2];
                if (findIndex == middleIndex2)
                    val2 = d2[index2];
                index2++;
            }
            findIndex++;

            //calculate median from 2 middle elements
            if (findIndex > middleIndex2) {
                return (val1 + val2) / 2.0;
            }
        }
    }
}

void airpalne_map()
{
    for (int p = 0; p < 10; p++) {
        std::string time_str = gettime();
        //timey wimey stuff
        unsigned int seed = static_cast<unsigned int>(std::stoul(time_str));
        std::srand(seed+p);

        //initialize the array to 0
        const int gridSize = 15;
        int array[gridSize][gridSize];
        for (int i = 0; i < gridSize; i++) {
            for (int j = 0; j < gridSize; j++)
                array[i][j] = 0;
        }

        int x = 0, y = 0;
        int direction = 0; //N1,E2,S3,W4
        for (int i = 0; i < 3; i++) {
            bool valid = false;
            //checking drop zone
            while (!valid) {
                x = std::rand() % 10;
                y = std::rand() % 10;
                direction = (std::rand() % 4) + 1;
                if (direction == 1) {
                    if ((array[y][x + 2] == 0) && (array[y + 1][x] == 0) && (array[y + 1][x + 1] == 0) && (array[y + 1][x + 2] == 0) &&
                        (array[y + 1][x + 3] == 0) && (array[y + 1][x + 4] == 0) && (array[y + 2][x + 2] == 0) && (array[y + 3][x + 2] == 0) &&
                        (array[y + 4][x + 1] == 0) && (array[y + 4][x + 2] == 0) && (array[y + 4][x + 3] == 0)) {
                        valid = true;
                    }
                }
                if (direction == 2) {
                    if ((array[y + 2][x + 4] == 0) && (array[y][x + 3] == 0) && (array[y + 1][x + 3] == 0) && (array[y + 2][x + 3] == 0) &&
                        (array[y + 3][x + 3] == 0) && (array[y + 4][x + 3] == 0) && (array[y + 2][x + 2] == 0) && (array[y + 2][x + 1] == 0) &&
                        (array[y + 1][x] == 0) && (array[y + 2][x] == 0) && (array[y + 3][x] == 0)) {
                        valid = true;
                    }
                }
                if (direction == 3) {
                    if ((array[y + 2][x] == 0) && (array[y][x + 1] == 0) && (array[y + 1][x + 1] == 0) && (array[y + 2][x + 1] == 0) &&
                        (array[y + 3][x + 1] == 0) && (array[y + 4][x + 1] == 0) && (array[y + 2][x + 2] == 0) && (array[y + 2][x + 3] == 0) &&
                        (array[y + 1][x + 4] == 0) && (array[y + 2][x + 4] == 0) && (array[y + 3][x + 4] == 0)) {
                        valid = true;
                    }
                }
                if (direction == 4) {
                    if ((array[y + 4][x + 2] == 0) && (array[y][x + 1] == 0) && (array[y][x + 2] == 0) && (array[y][x + 3] == 0) &&
                        (array[y + 1][x + 2] == 0) && (array[y + 2][x + 2] == 0) && (array[y + 3][x] == 0) && (array[y + 3][x + 1] == 0) &&
                        (array[y + 3][x + 2] == 0) && (array[y + 3][x + 3] == 0) && (array[y + 3][x + 4] == 0)) {
                        valid = true;
                    }
                }
            }

            //dz clear
            if (direction == 1) {
                array[y][x + 2] = 2;
                array[y + 1][x] = 1;
                array[y + 1][x + 1] = 1;
                array[y + 1][x + 2] = 1;
                array[y + 1][x + 3] = 1;
                array[y + 1][x + 4] = 1;
                array[y + 2][x + 2] = 1;
                array[y + 3][x + 2] = 1;
                array[y + 4][x + 1] = 1;
                array[y + 4][x + 2] = 1;
                array[y + 4][x + 3] = 1;
            }
            if (direction == 2) {
                array[y + 2][x + 4] = 2;
                array[y][x + 3] = 1;
                array[y + 1][x + 3] = 1;
                array[y + 2][x + 3] = 1;
                array[y + 3][x + 3] = 1;
                array[y + 4][x + 3] = 1;
                array[y + 2][x + 2] = 1;
                array[y + 2][x + 1] = 1;
                array[y + 1][x] = 1;
                array[y + 2][x] = 1;
                array[y + 3][x] = 1;
            }
            if (direction == 3) {
                array[y + 2][x] = 2;
                array[y][x + 1] = 1;
                array[y + 1][x + 1] = 1;
                array[y + 2][x + 1] = 1;
                array[y + 3][x + 1] = 1;
                array[y + 4][x + 1] = 1;
                array[y + 2][x + 2] = 1;
                array[y + 2][x + 3] = 1;
                array[y + 1][x + 4] = 1;
                array[y + 2][x + 4] = 1;
                array[y + 3][x + 4] = 1;
            }
            if (direction == 4) {
                array[y + 4][x + 2] = 2;
                array[y][x + 1] = 1;
                array[y][x + 2] = 1;
                array[y][x + 3] = 1;
                array[y + 1][x + 2] = 1;
                array[y + 2][x + 2] = 1;
                array[y + 3][x] = 1;
                array[y + 3][x + 1] = 1;
                array[y + 3][x + 2] = 1;
                array[y + 3][x + 3] = 1;
                array[y + 3][x + 4] = 1;
            }
        }

        for (int i = 0; i < gridSize; i++) {
            for (int j = 0; j < gridSize; j++) {
                std::cout << array[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;

        std::string filename = "Airplane_" + time_str + "_" + std::to_string(p) + ".csv";

        std::ofstream file(filename);

        if (!file.is_open()) {
            std::cerr << "Error opening file!" << std::endl;
            return;
        }

        for (int i = 0; i < gridSize; ++i) {
            for (int j = 0; j < gridSize; ++j) {
                file << array[i][j];
                if (j < gridSize - 1) file << ",";
            }
            file << "\n";
        }

        file.close();

    }
}


std::string gettime()
{
    time_t timestamp;
    time(&timestamp);
    return std::to_string(timestamp);
}