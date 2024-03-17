#include <iostream>
#include <string>
using namespace std;

int main() {

	string sen;
	getline(cin, sen);

	int max = sen.length();

	string word;
	string newWord;

	int start = 0;
	int end;

	for (int i = 0; i <= max; i++) {
		if (i == max || sen[i] == ' ') {
			end = i;
			word = sen.substr(start, end - start);
			newWord += word.back();
			start = i + 1;
		}
	}

	cout << "Your word creating by last letters of every word in sentence: " << newWord;
}