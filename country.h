#include "river.h"

class Country : River {
private:
	string nameOfCountry;
	int countOfRivers;
	River* river;
	int maxLength;
public:
	Country();
	Country(Country& C);
	Country(string nof, int cor, River* rn, int ml, int arl);

	bool findCountryRiver(string name);
	
	int findMaxLengthInCountry();
	int GetMaxLength();

	string GetNameOfCountry();

	friend ostream& operator<<(ostream& OS, Country& C);
	friend istream& operator>>(istream& IS, Country& C);

	~Country();
};