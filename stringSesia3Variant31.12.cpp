#include <iostream>
#include <string>
using namespace std;

int main() {
    string sen;
    cout << "Enter your sentence: " << endl;
    getline(cin, sen);

    int length = sen.length();

    string word;

    string anSen;

    int end;
    int start = 0;

    for (int i = 0; i <= length; i++) {
        if (i == length || sen[i] == ' ') {
            end = i;
            word = sen.substr(start, end - start);
            if (word.length() > 0 && (word[word.length() - 1] != 'j' && word[word.length() - 1] != 'f')) {
                anSen += word + ' ';
            }
            start = i + 1;
        }
    }
    cout << anSen;
    return 0;
}
