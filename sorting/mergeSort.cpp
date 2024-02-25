#include <iostream>
using namespace std;

void insertionSort(int firstIndex,int lastIndex,int list[]) {
	int hold;
	int length =  lastIndex - firstIndex + 1;
	for (int i = firstIndex + 1;i < lastIndex + 1;i++) {
		while (i > firstIndex && list[i] < list[i-1]) {
			hold = list[i];
			list[i] = list[i-1];
			list[i-1] = hold;
			i--;
		}
	}
}

void mergeSort(int firstIndex,int lastIndex,int list[]) {
	int length =  lastIndex - firstIndex + 1;
	int midIndex = (firstIndex + lastIndex) /2;

	if (length > 2) {
		mergeSort(firstIndex,midIndex,list);
		mergeSort(midIndex+1,lastIndex,list);

		insertionSort(firstIndex,lastIndex,list);
	} else if (length == 2) {
		insertionSort(firstIndex,lastIndex,list);
	}
}

int main() {
	int list[21] = {5,4,9,10,3,2,7,8,11,12,19,20,1,6,13,15,14,16,17,18,21};

	for (int m = 0;m < 21;m++) {
		std::cout << list[m] << ",";
	}

	std::cout << "\n";

	mergeSort(0,20,list);

	for (int i = 0;i < 21;i++) {
		std::cout << list[i] << ",";
	}
	
	return 0;
}

