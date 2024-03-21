#include <iostream>
using namespace std;

int **creatingArr(int n) {

	int** arr = new int* [n];

	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	return arr;

}

void spiralArr(int** arr, int n) {

	int num = 1;

	int left = 0;
	int right = n - 1;
	int top = 0;
	int bottom = n - 1;

	while (num <= n * n) {

		for (int i = left; i <= right; i++) {
			arr[top][i] = num++;
		}
		top++;

		for (int i = top; i <= bottom; i++) {
			arr[i][right] = num++;
		}
		right--;

		for (int i = right; i >= left; i--) {
			arr[bottom][i] = num++;
		}
		bottom--;

		for (int i = bottom; i >= top; i--) {
			arr[i][left] = num++;
		}
		left++;
	}

}

void RevSpiralArr(int** arr, int n) {

	int num = n*n;

	int left = 0;
	int right = n - 1;
	int top = 0;
	int bottom = n - 1;

	while (num >= 1) {

		for (int i = left; i <= right; i++) {
			arr[top][i] = num--;
		}
		top++;

		for (int i = top; i <= bottom; i++) {
			arr[i][right] = num--;
		}
		right--;

		for (int i = right; i >= left; i--) {
			arr[bottom][i] = num--;
		}
		bottom--;

		for (int i = bottom; i >= top; i--) {
			arr[i][left] = num--;
		}
		left++;
	}

}

void printArr(int** arr, int n) {

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << arr[i][j] << "\t";
		}
		cout << endl << endl << endl << endl;
	}

}

void deleteTheRest(int** arr, int n) {

	for (int i = 0; i < n; ++i) {
		delete[] arr[i];
	}
	delete[] arr;

}

int main() {
	
	int n;
	cin >> n;

	int** arr = creatingArr(n);

	spiralArr(arr, n);

	printArr(arr, n);

	cout << "\nReversed array: " << endl;

	RevSpiralArr(arr, n);

	printArr(arr, n);

	deleteTheRest(arr, n);
}