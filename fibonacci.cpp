// I know fibonacci sequences start with 0, but I changed it just for fun. Enjoy!

#include <iostream>
using namespace std;

int main() {
	const int NUM_FIBONACCI_NUMBERS = 10;
	int fibonacciNumbers[NUM_FIBONACCI_NUMBERS];
	int first;
	int second;
	int counter;
	int repeat;
	
	std::cout << "Starting fibonacci(my version)";

	do {
		do {
			std::cout << "\n\nPlease enter the smaller number: ";
			std::cin >> first;
	
			std::cout << "Please enter the bigger number: ";
			std::cin >> second;

			if (first >= second) {
				std::cout << "The first number must be smaller than the second number!\n";
			}
		} while(first >= second);

		for(counter = 0;counter < NUM_FIBONACCI_NUMBERS;counter++) {
			if (counter == 0) {
				fibonacciNumbers[counter] = first + second;
			} else if (counter == 1) {
				fibonacciNumbers[counter] = fibonacciNumbers[counter - 1] + second;
			} else {
				fibonacciNumbers[counter] = fibonacciNumbers[counter - 1] + fibonacciNumbers[counter - 2];
			}
		}

		std::cout << "When the first number was " << first << " and the second number was " << second << ":";

		for(counter = 0;counter < NUM_FIBONACCI_NUMBERS;counter++) {
			std::cout << "\n   Fibonacci number " << counter + 3 << " is " << fibonacciNumbers[counter];
		}

		std::cout << "\nWould you like to do this again?(negative number for no, anything else is yes)";
		std::cin >> repeat;
	} while(repeat >= 0);
}

