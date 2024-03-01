#include <iostream>
using namespace std;

void bubbleSort(int firstIndex,int lastIndex,int list[]) {
	int temp;
	int first = firstIndex;

	while (lastIndex > firstIndex) {
		if (list[firstIndex] > list[firstIndex + 1]) {
			temp = list[firstIndex + 1];
			list[firstIndex + 1] = list[firstIndex];
			list[firstIndex] = temp;
		}

		firstIndex++;
	}
	
	
	if (lastIndex > first) {
		bubbleSort(first,lastIndex-1,list);
	}
}

int main() {
	int list[21] = {5,4,9,10,3,2,7,8,11,12,19,20,1,6,13,15,14,16,17,18,21};

	for (int m = 0;m < 21;m++) {
		std::cout << list[m] << ",";
	}

	std::cout << "\n";
	
	bubbleSort(0,20,list);

	for (int i = 0;i < 21;i++) {
		std::cout << list[i] << ",";
	}
}