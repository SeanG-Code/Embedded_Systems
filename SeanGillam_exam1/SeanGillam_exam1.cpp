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
    print_pattern(4);
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
    int hold;
    for (int i = 0; i < hashtags.size(); i++) {
        for (int j = 0; j < hashtags.size(); j++) {
            if (hashtags[i] == hashtags[j]) {
                break;
            }
            else {
                int hold = j;
                if (longest < hold) {
                    longest = hold;
                }
            }
        }
    }
    return longest;
}

void print_pattern(int n)
{
    //your code here
}


float patient_health_data(int d1[], int d2[], int m, int n)
{
    float median = 0.0;
    //your code here
    return median;
}

void airpalne_map()
{
    std::string time_str = gettime();

}


std::string gettime()
{
    time_t timestamp;
    time(&timestamp);
    return std::to_string(timestamp);
}