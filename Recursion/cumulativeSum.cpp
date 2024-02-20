// Just adding all natural numbers from 0 to n

#include <iostream>
using namespace std;

int cumulativeSum(int n) {
	int result;

	if (n == 0 || n == 1) {
		result = n;
	} else {
		result = n + cumulativeSum(n-1);
	}

	return result;
}

int main() {
	int n = 0;

	do {
		std::cout << "What number would you like to have the cumulative sum to: ";
		std::cin >> n;
	
		if (n < 0) {
			std::cout << "No negative numbers!";
		}
	} while(n < 0);

	std::cout << cumulativeSum(n);

	return 0;
}