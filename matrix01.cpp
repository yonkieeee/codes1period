#include<iostream>
#include <random>
#include <ctime>
using namespace std;

int** createMatrix(int n) {
	int** matrix = new int* [n];

	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
	}

	return matrix;
}

void filledMatr(int** arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 1 + rand() % 10;
		}
	}
}
void printMatr(int** arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void filledArrWith01(int** arr, int n, int r, int k) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > r - 1) {
				arr[i][j] = 0;
			}
			if (j > k - 1) {
				arr[i][j] = 1;
			}

		}
	}
}

void deleteTheRest(int** arr, int n) {
	for (int i = 0; i < n; i++) {
		delete[]arr[i];
	}
	delete[]arr;
}
int main() {
	int n;
	cout << "Enter size of matrix: ";
	cin >> n;
	
	int r, k;

	cout << "Enter row: ";
	cin >> r;

	cout << "Enter column: ";
	cin >> k;

	if (r > n || k > n || r <= 0 || k <= 0) {
		cout << "Error!";
		return 0;
	}

	int** matrix = createMatrix(n);

	filledMatr(matrix, n);

	printMatr(matrix, n);

	cout << endl;

	filledArrWith01(matrix, n, r, k);

	printMatr(matrix, n);

	deleteTheRest(matrix, n);
}