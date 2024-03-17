#include "river.h"
#include "country.h"

using namespace std;

int main() {

    int n = 100;

    ifstream countryFile("country.txt");

    Country* countries = new Country[n];

    int count = 0;

    while (count < n && countryFile >> countries[count]) {
        count++;
    }

    countryFile.close();

    cout << endl;

    for (int i = 0; i < count; i++) {
        cout << "Country[" << i + 1 << "]: \n";
        cout << countries[i] << endl;
        cout << endl;
    }

    cout << "\n_______________________________________________\n";

    int index = 0;
    for (int i = 0; i < count; i++) {
        if (countries[i].GetMaxLength() > countries[index].GetMaxLength()) {
            index = i;
        }
    }
    cout << "Country with longest length of rivers in summ:\n" << countries[index];

    cout << endl;

    cout << "\n_______________________________________________\n";

    string nameOfRiver;
    cout << "Enter name of river what you want to check: ";
    cin >> nameOfRiver;

    bool check = false;
    for (int i = 0; i < count; i++) {
        if (countries[i].findCountryRiver(nameOfRiver)) {
            cout << countries[i].GetNameOfCountry() << " ";
            check = true;
        }
    }
    if (!check) {
        cout << "This river doesn`t flow in any of the country:(";
    }
    cout << "\n_______________________________________________\n";

    int min = countries[0].GetMaxLength(), max = countries[0].GetMaxLength();
    for (int i = 0; i < count; i++) {
        if (max < countries[i].GetMaxLength()) {
            max = countries[i].GetMaxLength();
        }
        if (min > countries[i].GetMaxLength()) {
            min = countries[i].GetMaxLength();
        }
    }

    float avarageLength = float(max + min) / 2;
    cout << "\nSmallest river have " << max << " m\nLargest river have " << min << " m\nAvarage length of river is " << avarageLength << " m\n";

    int avIndex = 0;
    int avRiver = countries[0].GetMaxLength();

    for (int i = 0; i < count; i++) {
        avRiver = countries[i].GetMaxLength();
        for (int j = 0; j < count; j++) {
            if (countries[j].GetMaxLength() > avarageLength && countries[j].GetMaxLength() < avRiver) {
                avRiver = countries[j].GetMaxLength();
                avIndex = j;
            }
        }
    }
    cout << "\nCountry with closest length of river:\n" << countries[avIndex];


    delete[] countries;
}
