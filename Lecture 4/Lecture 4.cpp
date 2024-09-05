// Lecture 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

float cArea(float r);
void swapNum(int& x, int& y);

int main()
{
	//Activity 3
	int firstNum = 10;
	int secondNum = 20;
	swapNum(firstNum, secondNum);
	std::cout << firstNum << " " << secondNum;

	// Activity 2
	/*std::cout << "Enter radius: ";
	float inRad;
	std::cin >> inRad;
	float area = cArea(inRad);
	std::cout << "Circle has area: " << area;
	*/
	// Activity 1
	/*
	std::string msg = R"(When the sunlight strikes raindrops in the air, they act as a prism and form
		a rainbow.The rainbow is a division of white light into many beautiful colors.
		These take the shape of a long round arch, with its path high above, and its
		two ends apparently beyond the horizon.There is, according to legend, a
		boiling pot of gold at one end.People look, but no one ever finds it.When a
		man looks for something beyond his reach, his friends say he is looking for
		the pot of gold at the end of the rainbow.Throughout the centuries people
		have explained the rainbow in various ways.Some have accepted it as a
		miracle without physical explanation.To the Hebrews it was a token that
		there would be no more universal floods.The Greeks used to imagine that
		it was a sign from the gods to foretell war or heavy rain.The Norsemen
		considered the rainbow as a bridge over which the gods passed from earth
		to their home in the sky.Others have tried to explain the phenomenon
		physically.Aristotle thought that the rainbow was caused by reflection of
		the sun's rays by the rain. Since then physicists have found that it is not
		reflection, but refraction by the raindrops which causes the rainbows.Many
		complicated ideas about the rainbow have been formed.The difference in
		the rainbow depends considerably upon the size of the drops, and the
		width of the colored band increases as the size of the drops increases.
		The actual primary rainbow observed is said to be the effect of super
		imposition of a number of bows.If the red of the second bow falls upon the
		green of the first, the result is to give a bow with an abnormally wide yellow
		band, since red and green light when mixed form yellow.This is a very
		common type of bow, one showing mainly red and yellow, with little or no
		green or blue.)";

	int counter = 0;
	int counter2 = 0;

	for(int i=0;i<msg.length();i++)
	{
		if(msg[i]=='a')
		{
			counter++;
		}
		if((msg.substr(i,3)==" a ") || (msg.substr(i,3)==" a\n") || (msg.substr(i,3)=="\na "))
		{
			counter2++;
		}
	}

	std::cout << "Number of a's found = " << counter << std::endl;
	std::cout << "Number of words a found = " << counter2;
	*/
}

float cArea(float r) 
{
	const float Pi = 3.1415;
	return Pi * r * r;
}

void swapNum(int& x, int& y)
{
	int hold;
	hold = x;
	x = y;
	y = hold;
}
