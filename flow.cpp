#include <iostream>
using namespace std;

int main() {
	int first;
	int second;
	int rounds = 0;

	std::cout << "Starting number comparison...";

	while(true) {
		std::cout << "\n   Round " << rounds + 1 << ":";
		std::cout << "\n      Please enter a first value(enter a negative number to quit): ";
		std::cin >> first;

		if (first < 0) {
			break;
		}
		
		std::cout << "      Please enter a second value(enter a negative number to redo the first number): ";
		std::cin >> second;

		if (second < 0) {
			continue;
		}

		rounds++;

		if (first > second) {
			std::cout << "      The first value is greater than the second value.\n";
		} else if (second > first) {
			std::cout << "      The second value is greater than the first value.\n";
		}
	}

	std::cout << "\nYou have completed " << rounds << " rounds!";

	return 0;
}