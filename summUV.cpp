#include <iostream>
using namespace std;

int fact(int x) {
	if (x <= 0) return 1;

	return x * fact(x - 1);
}
int main() {
	
	int n;

	cout << "Enter n: ";
	cin >> n;
	n = n + 1;

	float u, v;

	cout << "Enter u: ";
	cin >> u;

	cout << "Enter v: ";
	cin >> v;

	float* a = new float[n];
	float* b = new float[n];

	a[1] = u;
	b[1] = v;

	for (int i = 2; i < n; i++) {

		a[i] = 2 * b[i - 1] + a[i - 1];

		b[i] = 2 * pow(a[i - 1], 2) + b[i - 1];


	}

	for (int i = 1; i < n; i++) {
		cout << "A [" << i + 1 << "]: ";
		cout << a[i] << "\t";
	}
	cout << endl;

	for (int i = 1; i < n; i++) {
		cout << "B [" << i + 1 << "]: ";
		cout << b[i] << "\t";
	}
	cout << endl;

	float summ = 0;

	for (int i = 1; i < n; i++) {
		summ += (a[i] * b[i]) / fact(i + 1);
	}

	cout << summ;

	delete[] a;
	delete[] b;
}