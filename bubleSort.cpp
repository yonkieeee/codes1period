#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int start, end;
    cout << "Enter start of range of numbers: ";
    cin >> start;

    cout << "Enter end of range of numbers: "; // Corrected prompt for the end of range
    cin >> end;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = start + rand() % (end - start + 1);
    }

    cout << "Array without sorting:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }

    int l = 0;
    cout << "\nBubble sort:\n";
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                cout << "Iteration [" << l + 1 << "]\n ";
                l++;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                for (int k = 0; k < n; k++) {
                    cout << arr[k] << "\t";
                }
                cout << endl;
            }
        }
    }
    delete[] arr;
    return 0;
}
