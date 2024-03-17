#include "Header.h"

Computer::Computer(){
	processor = "";
	speed = 0;
	size = 0;
}

Computer::Computer(Computer& c){
	processor = c.processor;
	speed = c.speed;
	size = c.size;
}

Computer::Computer(string pro, int spe, int siz){
	processor = pro;
	speed = spe;
	size = siz;
}

bool Computer::operator>(Computer& c)
{
	return speed > c.speed;
}

bool Computer::operator<(Computer& c)
{
	return size < c.size;
}

ostream& operator<<(ostream& OS, Computer& c){
	OS << "Processor: " << c.processor << endl;
	OS << "Speed: " << c.speed << endl;
	OS << "Size: " << c.size;

	return OS;
}

istream& operator>>(istream& IS, Computer& c){
	IS >> c.processor >> c.speed >> c.size;
	cout << endl;

	return IS;
}
