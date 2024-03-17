//Перше завдання з першої фотки
#include <iostream>
#include <ctime>//Бібліотека яка додмає можливість робити рандомні числа
using namespace std;


int main() {
	int n, m;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter m: ";
	cin >> m;

	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}

	srand(time(0));//якшо написати це - то кожен раз числа будуть різні, як не то впише рандомні числа і кожен ра при апуску будуть ті ж самі
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 20;//так записувати рандомні (20 - це максимальне допустиме число)
		}
	}

	cout << "\nMatrix:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	//шоб повернути матрицю на 90 градусів проти годинникової треба її спочатку транспонувати і рядки поміняти задом на перед
	cout << "Changed matrix:" << endl;
	for (int i = m - 1; i >= 0; i--) { //тут рядки виводяться з кінця
		for (int j = 0; j < n; j++) { // якшо поміняти місцями "n" i "m" 
			cout << arr[j][i] << "\t";// і тут поміняти місця "j" i "i" то вона транспонується
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}