#include "Rational.h"

RatNum::RatNum(){
	k = 0;
	n = 0;
	AvSum = 0;
	mult = 0;
	max = 0;
	min = 0;
	count = 0;
	difMaxMin = 0;
	arr = new float[1] {0};
}

RatNum::RatNum(RatNum& R){
	k = R.k;
	n = R.n;
	AvSum = R.AvSum;
	mult = R.mult;
	max = R.max;
	min = R.min;
	count = R.count;
	difMaxMin = R.difMaxMin;
	
	arr = new float[R.n];

	for (int i = 0; i < R.n; i++) {
		arr[i] = R.arr[i];
	}
}

RatNum::RatNum(float chislo, int size, float as, float mu, float ma, float mi, float co, float dmm, float* array){
	k = chislo;
	n = size;
	AvSum = as;
	mult = mu;
	max = ma;
	min = mi;
	count = co;
	difMaxMin = dmm;

	arr = new float[size];

	for (int i = 0; i < size; i++) {
		arr[i] = array[i];
	}
}

void RatNum::findAvSum(){

	float num = 0;
	AvSum = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > k) {
			num++;
			AvSum += arr[i];
		}
	}

	AvSum /= num;
}

void RatNum::findMult(){
	mult = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] < k) {
			mult *= arr[i];
		}
	}
}

void RatNum::findMaxMin(){
	min = arr[0];
	max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
}

void RatNum::findCountOfSimilar(){
	count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			count++;
		}
	}
}

void RatNum::findDifMaxMin(){
	difMaxMin = max - min;
}

ostream& operator<<(ostream& OS, RatNum& R){
	OS << "Number: " << R.k << endl;
	OS << "Array: ";
	for (int i = 0; i < R.n; i++) {
		OS << R.arr[i] << " ";
	}
	OS << endl;
	OS << "Avarage of numbers array which greater than number: " << R.AvSum;
	OS << "\nMultiplication of numbers array which smaller than number: " << R.mult;
	OS << "\nCount of similar numbers between array and your number: " << R.count;
	OS << "\nMax element of array: " << R.max;
	OS << "\nMin element of array: " << R.min;
	OS << "\nDiference between max and min: " << R.difMaxMin;

	return OS;
}

istream& operator>>(istream& IS, RatNum& R){
	IS >> R.k >> R.n;
	cout << endl;

	R.arr = new float[R.n];
	for (int i = 0; i < R.n; i++) {
		IS >> R.arr[i];
		cout << " ";
	}
	cout << endl;

	R.findAvSum();
	R.findCountOfSimilar();
	R.findMaxMin();
	R.findMult();
	R.findDifMaxMin();
	
	return IS;
}
RatNum::~RatNum() {
	delete[] arr;
}
