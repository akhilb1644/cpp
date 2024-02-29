#include <iostream>
using namespace std;

void quicksort(int firstIndex,int lastIndex,int list[]) {	
	int pivot = list[(lastIndex + firstIndex) / 2];
	int length = (lastIndex - firstIndex) + 1;
	int temp;
	int low = firstIndex;
	int high = lastIndex;
	
	while (firstIndex < lastIndex && length > 2) {
		while (list[firstIndex] < pivot) {
			firstIndex++;	
		}

		while (list[lastIndex] > pivot) {
			lastIndex--;
		}

		if (firstIndex < lastIndex) {
			if (list[firstIndex] == list[lastIndex]) {
				firstIndex++;
				lastIndex--;
			} else {
				temp = list[firstIndex];
				list[firstIndex] = list[lastIndex];
				list[lastIndex] = temp;
			}
		}
	}

	if (length > 2) {
		quicksort(low,lastIndex,list);
		quicksort(lastIndex+1,high,list);
	} else if (length == 2) {
		if (list[firstIndex] > list[lastIndex]) {
			temp = list[firstIndex];
			list[firstIndex] = list[lastIndex];
			list[lastIndex] = temp;
		}
	}
}

int main() {
	int list[21] = {5,4,9,10,3,2,7,8,11,12,19,20,1,6,13,15,14,16,17,18,21};

	for (int m = 0;m < 21;m++) {
		std::cout << list[m] << ",";
	}

	std::cout << "\n";
	
	quicksort(0,20,list);

	for (int i = 0;i < 21;i++) {
		std::cout << list[i] << ",";
	}

	std::cout << "\n";
	
	int list2[21] = {1,2,3,4,5,6,7,8,9,10,11,10,9,8,7,6,5,4,3,2,1};

	for (int m = 0;m < 21;m++) {
		std::cout << list2[m] << ",";
	}

	std::cout << "\n";
	
	quicksort(0,20,list2);

	for (int i = 0;i < 21;i++) {
		std::cout << list2[i] << ",";
	}

	return 0;
}