#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Computer {
private:
	string processor;
	int speed;
	int size;
public:
	Computer();
	Computer(Computer& c);
	Computer(string pro, int spe, int siz);

	friend ostream& operator << (ostream& OS, Computer& c);
	friend istream& operator >> (istream& IS, Computer & c);

	bool operator >(Computer& c);
	bool operator <(Computer& c);
};