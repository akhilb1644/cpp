#include <iostream>
using namespace std;

int main() {
	int list[21] = {5,4,9,10,3,2,7,8,11,12,19,20,1,6,13,15,14,16,17,18,21};
	int hold;

	for (int m = 0;m < 21;m++) {
		std::cout << list[m] << ",";
	}

	std::cout << "\n";

	for (int i = 1;i < sizeof(list)/sizeof(int);i++) {
		while (i > 0 && list[i] < list[i-1]) {
			hold = list[i];
			list[i] = list[i-1];
			list[i-1] = hold;
			i--;
		}
	}

	for (int i = 0;i < 21;i++) {
		std::cout << list[i] << ",";
	}
	
	return 0;
}

