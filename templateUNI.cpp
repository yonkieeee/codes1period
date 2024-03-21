#include <iostream>
#include <string>
using namespace std;

//template <typename T1, typename T2>
//
////T add(T a, T b){
////	return a + b;
////}
//
//T2 add(T2 a, T1 b) {
//	return string(a) + string(b);
//}
//
//int main() {
//
//	
//	char r3 = add<int, string>(2, 5);
//	cout << r3 << endl;
//
//	//int r1 = add<int>(1, 1);
//	//cout << r1;
//	//float r2 = add<float>(2.4, 5.3);
//	//cout << endl << r2 << endl;
//	//int r3 = add<char>('a', '!');
//	//cout << char(r3) << endl;
//	//char r4 = add<char>('a', '!');
//	//cout << int(r4) << endl;
//	//string r5 = add<string>("a", "!");
//	//cout << string(r5) << endl;
//
//	///*cout << 'a' << " " << int('a') << endl;
//	//cout << '!' << " " << int('!') << endl;
//	//cout << char(97 + 33);*/
//}

template <class T>

class Number {
private:
	T num;
public:
	Number(T n) : num(n) {};

	T getNum() {
		return num;
	}
};

int main() {
	Number<int> number(7);

	Number<double> nD(7.5);

	cout << number.getNum() << endl;
	cout << nD.getNum();
}