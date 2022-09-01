/* 
leap.cpp

Author : Patrick Ging
Instructor : Professor Zamanksy

Takes a year (integer) in via std::cin prints whether or not it's a leap year

*/

#include <iostream>

int main()
{
	/*
	A year is a leap year if 

	if the year is divisible by 400  but if it's a century year
	it must be divisible by 400

	leap years : 4, 12, 400
	not leap years : 13, 1, 200
	*/

	int year; // intializing year

	std::cout << "Enter year: ";
	std::cin >> year;

	if (year % 100 == 0) { // century yea
		if (year % 400 == 0) {
			std::cout << "Leap year";
		} else {
			std::cout << "Common year";
		}
	} else {
		if (year % 4 == 0) {
			std::cout << "Leap year";
		} else {
			std::cout << "Common year";
		}
	}

	return 0;
}