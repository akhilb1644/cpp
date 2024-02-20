#include <iostream>
using namespace std;

int main() {
	int i;
	int j;

	int rows1;
	int cols1;
	int rows2;
	int cols2;

	std::cout << "How many rows would you like matrix 1 to be? ";
	std::cin >> rows1;

	std::cout << "How many columns would you like matrix 1 to be? ";
	std::cin >> cols1;

	std::cout << "How many rows would you like matrix 2 to be? ";
	std::cin >> rows2;

	std::cout << "How many columns would you like matrix 2 to be? ";
	std::cin >> cols2;

	if (rows2 != rows1 || cols2 != cols1) {
		std::cout << "Your matricies cannot be multiplied.";
	} else {
		int matrix1[rows1][cols1];
		int matrix2[rows2][cols2];
		int result[rows1][cols2];

		for (i = 0;i < rows1;i++) {
			for (j = 0;j < cols1;j++) {
				std::cout << "What number would you like to assign to element " << i+1 << j+1 << " of the first matrix.";
				std::cin >> matrix1[i][j];
			}
		}

		for (i = 0;i < rows2;i++) {
			for (j = 0;j < cols2;j++) {
				std::cout << "What number would you like to assign to element " << i+1 << j+1 << " of the second matrix.";
				std::cin >> matrix2[i][j];
			}
		} 

		for (i = 0;i < rows2;i++) {
			for (j = 0;j < cols2;j++) {
				result[i][j] = matrix1[i][j] + matrix2[i][j];
			}
		} 

		std::cout << "Sum of two matricies is... " << endl;

		for (i = 0;i < rows2;i++) {
			for (j = 0;j < cols2;j++) {
				std::cout << "Element " << i + 1 << j + 1 << ": " << result[i][j] << endl;
			}
		} 
	}

	return 0;
}