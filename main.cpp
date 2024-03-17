#include "trap.h"

int main() {

    ifstream file("Text.txt");

    if (!file.is_open()) {
        cout << "Error";
        return 1;
    }

    int n = 10000;

    Trapecia* arr = new Trapecia[n];

    int count = 0;

    while (count < n && file >> arr[count]) {
        count++;
    }

    file.close();

    for (int i = 0; i < count; i++) {
        cout << "\nTrapecia [" << i + 1 << "]:\n";
        cout << arr[i] << endl;
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                Trapecia temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        cout << "\nTrapecia [" << i + 1 << "]:\n";
        cout << arr[i] << endl;
    }

    Trapecia smallestArea = arr[0];

    for (int i = 0; i < count; i++) {
        if (arr[i] < smallestArea) {
            smallestArea = arr[i];
        }
    }

    cout << endl << smallestArea;

    delete[] arr;
}
