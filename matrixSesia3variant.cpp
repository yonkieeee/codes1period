#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int** createMatrix(int n) {
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
	}
	return matrix;
}

void filledMatr(int** arr, int n, int start, int end) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = start + rand() % (end - start + 1);
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
void printArr(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
}

void checkForRaise(int** arr, int* check, int n) {
	for (int j = 0; j < n; j++) {
		check[j] = 1;
		for (int i = 0; i < n - 1; i++) {
			if (!(arr[i][j] < arr[i + 1][j])) {
				check[j] = 0;
			}
		}
	}
}

int main() {

	srand(time(NULL));

	int size, end, start;
	cout << "Enter size of matrix: ";
	cin >> size;

	cin >> start >> end;

	int**arr = createMatrix(size);

	filledMatr(arr, size, start, end);

	printMatr(arr, size);

	int* check = new int[size];

	checkForRaise(arr, check, size);

	cout << endl;
	printArr(check, size);

	for (int i = 0; i < size; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	delete[]check;
}