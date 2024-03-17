#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class River {
private:
	string riverName;
	int length;
public:
	River();
	River(River& R);
	River(string rn, int l);

	string GetRiverName();
	int GetLenght();

	friend ostream& operator<<(ostream& OS, River& R);
	friend istream& operator>>(istream& IS, River& R);
};
