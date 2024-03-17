#include <iostream>
#include <string>
using namespace std;

int main(){

	string sen;

	cout << "Enter your sentence: ";
	getline(cin, sen);

	int len = sen.length();
	
	int word = 0;
	string* arr = new string[len];

	int start = 0;
	int end;

	for (int i = 0; i <= len; i++) {
		if (i == len || sen[i] == ' ') {

			end = i;

			string words = sen.substr(start, end - start);

			arr[word] = words;

			start = i + 1;

			word++;
		}
	}

	int num;
	cout << "Enter the number of what you want to change: ";
	cin >> num;

	string changedWord;
	cout << "Enter the word on which you want change: ";
	cin >> changedWord;

	arr[num - 1] = changedWord;

	for (int i = 0; i < word; i++) {
		cout << arr[i] << " ";
	}

	delete[] arr;
}