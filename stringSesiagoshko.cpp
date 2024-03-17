#include <iostream>
#include <string>
using namespace std;

int main() {
	string sen;
	cout << "Enter your sentences: ";
	getline(cin, sen);

	int l = sen.length();

	string* words = new string[l];
	int count = 0;
	int start = 0, end;

	for (int i = 0; i < l; i++) {
		if (i == l || sen[i] == ' ') {
			end = i;
			words[count] = sen.substr(start, end - start);
			count++;
			start = i + 1;
		}
	}

	string word;
	cout << "Enter word what you want to check: ";
	cin >> word;

	int check = 1;

	for (int i = 0; i < l; i++) {
		if (word == words[i]) {
			check++;
		}
	}
	cout << "Word repeats " << check << " times";
}