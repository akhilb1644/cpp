#include <iostream>
using namespace std;

int i;

void printMultipleTimes(string dialogue,int times) {
	for(i = 0;i < times;i++) {
		std::cout << dialogue << "\n";
	}
}

int main() {
	printMultipleTimes("Hola, how are you?",7000);

	return 0;
}