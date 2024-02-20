#include <iostream>
using namespace std;

int factorial(int n) {
	int result;

	if (n == 1) {
		result = 1;
	} else if (n == 2) {
		result = 2;
	} else {
		result = n * factorial(n-1);
	}

	return result;
}

int main() {
	cout << factorial(6);

	return 0;
}