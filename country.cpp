#include "country.h"
#include "river.h"

Country::Country()
{
	nameOfCountry = "";
	countOfRivers = 0;
	river = new River[0]{};
	maxLength = 0;
}

Country::Country(Country& C)
{
	nameOfCountry = C.nameOfCountry;
	countOfRivers = C.countOfRivers;

	river = new River[C.countOfRivers];
	for (int i = 0; i < C.countOfRivers; i++) {
		river[i] = C.river[i];
	}
	maxLength = C.maxLength;
}
Country::Country(string nof, int cor, River* rn, int ml, int arl)
{
	nameOfCountry = nof;
	countOfRivers = cor;

	river = new River[cor];
	for (int i = 0; i < cor; i++) {
		river[i] = rn[i];
	}

	maxLength = ml;
}

bool Country::findCountryRiver(string name)
{
	for (int i = 0; i < countOfRivers; i++) {
		if (name == river[i].GetRiverName()) {
			return true;
			break;
		}
	}
	return false;
}

int Country::findMaxLengthInCountry()
{

	for (int i = 0; i < countOfRivers; i++) {
		maxLength += river[i].GetLenght();
	}
	return maxLength;
}

int Country::GetMaxLength()
{
	return maxLength;
}

string Country::GetNameOfCountry()
{
	return nameOfCountry;
}

ostream& operator<<(ostream& OS, Country& C)
{
	OS << "Country: " << C.nameOfCountry << endl;
	for (int i = 0; i < C.countOfRivers; i++) {
		OS << C.river[i];
		cout << endl;
	}
	OS << "Max length: " << C.maxLength;
	return OS;
}


istream& operator>>(istream& IS, Country& C) {

	IS >> C.nameOfCountry >> C.countOfRivers;
	cout << endl;

	C.river = new River[C.countOfRivers];

	for (int i = 0; i < C.countOfRivers; i++) {
		cout << endl;
		IS >> C.river[i];
	}

	C.findMaxLengthInCountry();

	return IS;
}

Country::~Country() {
	delete[] river;
}