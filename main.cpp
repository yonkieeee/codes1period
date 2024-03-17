#include "Header.h"

void printList(int count, Computer* list) {
	for (int i = 0; i < count; i++) {
		cout << "Computer [" << i + 1 << "]:\n ";
		cout << list[i] << endl;
		cout << endl;
	}
}

int main(){
	ifstream file("Text.txt");

	if (!file.is_open()) {
		cout << "Error." << endl;
		return 0;
	}

	int n;
	cout << "How many CPUs : ";
	cin >> n;

	Computer* list = new Computer[n];

	int count = 0;

	while (count < n && file >> list[count]) {
		count++;
	}

	printList(count, list);

	cout << "From smaller to bigger size: " << endl;
	cout << endl;

	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - i - 1; j++) {
			if (list[j + 1] < list[j]) {
				Computer temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	printList(count, list);

	cout << "From fastest to the slowest speed: " << endl;
	cout << endl;

	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - i - 1; j++) {
			if (list[j + 1] > list[j]) {
				Computer temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	printList(count, list);

}