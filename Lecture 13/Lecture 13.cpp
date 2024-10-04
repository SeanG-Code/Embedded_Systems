// Lecture 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

struct mystructure {
	int myNum = 0;
	std::string myString = "";
	int sum(int a, int b) {
		return a + b;
	}
};

class Fruit {
public:
	std::string name;
	std::string color;
	int price;
};

class Formulas {
public:
	void evenOrOdd(int num) {
		if (num % 2 == 0)
			std::cout << num <<" Is Even!\n";
		else
			std::cout << num << " Is Odd!\n";
	}
	void remainder10(int num) {
		std::cout << num % 10;
	}
};

class GradeBook {
public:
	void setCourseName(std::string name) {
		courseName = name;
	}
	std::string getCourseName() {
		return courseName;
	}
	void displayMessage() {
		std::cout << "Welcome to " << getCourseName() << std::endl;
	}
private:
	std::string courseName;
};

class Car {
public:
	std::string brand;
	std::string model;
	int year;
	Car(std::string x, std::string y, int z) : brand(x), model(y), year(z)
	{

	}
};

int main()
{
	Car carObject("Toyota", "Rav4", 1999);
	std::cout << carObject.year << " " << carObject.brand << " " << carObject.model;

	/*
	mystructure mine;
	mine.myNum = 1;
	mine.myString = "Hello World!";
	std::cout << mine.myNum << std::endl;
	std::cout << mine.myString << std::endl;
	std::cout << mine.sum(3, 5) << std::endl;
	return 0;
	*/

	/*
	Fruit mine;

	mine.name = "watermelon";
	mine.color = "green";
	mine.price = 5;

	std::cout << mine.name << std::endl << mine.color << std::endl << mine.price << std::endl;
	return 0;
	*/

	/*
	Formulas math;

	math.evenOrOdd(4);
	math.remainder10(15);
	*/

	/*
	GradeBook grade;
	//grade.setCourseName("ECE3750");
	//std::cout << grade.getCourseName();

	std::string nameOfCourse;
	std::cout << "enter name of your course: ";
	std::getline(std::cin, nameOfCourse);

	grade.setCourseName(nameOfCourse);
	grade.displayMessage();
	*/
}