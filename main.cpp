#include "Rational.h"

int main() {

	ifstream file("Text.txt");

	if (!file.is_open()) {
		cout << "Error";
		return 1;
	}

	int n = 1000;

	RatNum* arr = new RatNum[n];

	int count = 0;

	while (count < n && file >> arr[count]) {
		count++;
	}

	file.close();

	for (int i = 0; i < count; i++) {
		cout << "\nRational: [" << i + 1 << "]: ";
		cout << arr[i];
		cout << endl;
	}
}