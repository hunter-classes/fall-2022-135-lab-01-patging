/* 
month.cpp

Author : Patrick Ging
Instructor : Professor Zamanksy

Takes a year, month, print the amount of days


*/

#include <iostream>

int main()
{
	/*
	Days w/ 31 days
	Jan, march,may,july,august,oct,december

	Days w/ 30 days
	April,June,Sept,Nov

	feb has 28, if leap year, 29 
	*/


	int month, year; // initializing

	std::cout << "Enter year: ";
	std::cin >> year;

	std::cout << "Enter month: ";
	std::cin >> month;

	if (
		month == 1  || 
		month == 3  ||
		month == 5  ||
		month == 7  ||
		month == 8  ||
		month == 10 ||
		month == 12
			) { // 31 days 
		std::cout << "31 days" << std::endl;
	} else if (
		month == 4  || 
		month == 6  ||
		month == 9  ||
		month == 11 
		) { // 30 days

		std::cout << "30 days" << std::endl;
	} else if (month == 2) { // feburary


		// checking leap year  

		/* 
		Something is a leap year when

		if century year it's divisible by 400

		elsewise if it's divisible by 4
		*/
		if (year % 100 == 0) { // century
			if ( year % 400 == 0 ) { // leap year
				std::cout << "29 days" << std::endl;
			} else { // not leap years
				std::cout << "28 days" << std::endl;
			}
		} else {
			// normal criterium
			if (year % 4 == 0) { // leap year
				std::cout << "29 days" << std::endl;
			} else { // not leap year
				std::cout << "28 days" << std::endl;
			}
		}
	}


	return 0;
}