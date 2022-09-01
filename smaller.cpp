/* 
smaller.cpp

Author : Patrick Ging
Instructor : Professor Zamanksy

Asks for input of two integers and prints the smaller of the two

*/

#include <iostream>

int main()
{

	int num1, num2; // two integers to beu used

	std::cout << "Enter the first number: ";
	std::cin >> num1;

	std::cout << "Enter the second number: ";
	std::cin >> num2;
	// obtaining inputs


	if (num1 > num2) { // num1 is greater than num two print num 2
		std::cout << "The smaller of the two is  " << num2 << std::endl;
	} else if (num1 < num2) {
		std::cout << "The smaller of the two is " << num1 << std::endl;
	} else { // if they're equal?
		std::cout << "The numbers are equal " << std::endl;;
	}

	return 0;
}