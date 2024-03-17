#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class RatNum {
private:
	float k;
	int n;
	float AvSum;
	float mult;
	float max;
	float min;
	float count;
	float difMaxMin;
	float* arr;
public:
	RatNum();
	RatNum(RatNum& R);
	RatNum(float chislo, int size, float as, float mu, float ma,float mi, float co,float dmm, float* array);

	void findAvSum();
	void findMult();
	void findMaxMin();
	void findCountOfSimilar();
	void findDifMaxMin();

	~RatNum();


	friend ostream& operator<<(ostream& OS, RatNum& R);
	friend istream& operator>>(istream& IS, RatNum& R);
};