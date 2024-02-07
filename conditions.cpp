#include <iostream>
using namespace std;

int main() {
	int x;
	std::cout << "Type a number that will be the value for the variable x: ";
	cin >> x;
	if (x > 10) {
		std::cout << "The variable x is greater than 10";
	} else if (x < 10) {
		std::cout << "The variable x is less than 10";
	} else {
		std::cout << "The variable x is equal to 10";
	}
	return 0;
}