//����� �������� � ����� �����
#include <iostream>
#include <ctime>//��������� ��� ����� ��������� ������ ������� �����
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

	srand(time(0));//���� �������� �� - �� ����� ��� ����� ������ ���, �� �� �� ����� ������� ����� � ����� �� ��� ������ ������ � � ���
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 20;//��� ���������� ������� (20 - �� ����������� ��������� �����)
		}
	}

	cout << "\nMatrix:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	//��� ��������� ������� �� 90 ������� ����� ����������� ����� �� �������� ������������� � ����� ������� ����� �� �����
	cout << "Changed matrix:" << endl;
	for (int i = m - 1; i >= 0; i--) { //��� ����� ���������� � ����
		for (int j = 0; j < n; j++) { // ���� ������� ������ "n" i "m" 
			cout << arr[j][i] << "\t";// � ��� ������� ���� "j" i "i" �� ���� �������������
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}