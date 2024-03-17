#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Trapecia {
private:
	float main1;
	float main2;
	float latSide;
	float height;
	float area;
	float perimeter;
public:
	Trapecia();
	Trapecia(Trapecia& T);
	Trapecia(float ma1, float ma2, float lS, float h, float ar, float per);

	bool operator >(Trapecia& T);
	bool operator <(Trapecia& T);

	void findAnSide();
	void findPerimeter();
	void findArea();

	friend ostream& operator <<(ostream& OS, Trapecia& T);
	friend istream& operator >>(istream& IS, Trapecia& T);

};