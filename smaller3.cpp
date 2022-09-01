/* 
smaller3.cpp

Author : Patrick Ging
Instructor : Professor Zamanksy

Asks for input of three integers and prints the smallest of the three

*/

#include <iostream>

int main()
{

	int num1, num2, num3; // 3 integers to beu used

	std::cout << "Enter the first number: ";
	std::cin >> num1;

	std::cout << "Enter the second number: ";
	std::cin >> num2;

	std::cout << "Enter the third number: ";
	std::cin >> num3;
	// inputs...


	if (num1 > num2) { 
		if (num2 > num3) { // we know that b/c num1 > num2, num2 > num3, num1 > num2 > num3
			std::cout << "The smaller of the three is " << num3 << std::endl;
		} else { // elsewise num2 is smallest
			std::cout << "The smaller of the three is " << num2 << std::endl;
		}
	} else { //  if num2 > num1
		if (num1 > num3) {// same logic as above
			std::cout << "The smaller of the three is " << num3 << std::endl;
		} else {
			std::cout << "The smaller of the three is " << num1 << std::endl;
		}
	}

	return 0;
}