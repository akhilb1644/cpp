#include <iostream>
using namespace std;

void selectionSort(int firstIndex,int lastIndex,int list[]) {
	int smallestIndex;
	int hold;

	for (int i = firstIndex;i < lastIndex + 1;i++) {
		smallestIndex = i;

		for (int j = i;j < lastIndex + 1;j++) {
			if (list[smallestIndex] > list[j]) {
				smallestIndex = j;
			}
		}

		hold = list[i];
		list[i] = list[smallestIndex];
		list[smallestIndex] = hold;
	}
}

int main() {
	int list[21] = {5,4,9,10,3,2,7,8,11,12,19,20,1,6,13,15,14,16,17,18,21};

	for (int m = 0;m < 21;m++) {
		std::cout << list[m] << ",";
	}

	std::cout << "\n";

	selectionSort(0,20,list);

	for (int i = 0;i < 21;i++) {
		std::cout << list[i] << ",";
	}
	
	return 0;
}