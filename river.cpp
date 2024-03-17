#include "river.h"

River::River()
{
	riverName = "";
	length = 0;
}

River::River(River& R)
{
	riverName = R.riverName;
	length = R.length;
}

River::River(string rn, int le)
{
	riverName = rn;
	length = le;
}

string River::GetRiverName()
{
	return riverName;
}

int River::GetLenght()
{
	return length;
}

ostream& operator<<(ostream& OS, River& R)
{
	OS << "Name of river: " << R.riverName;
	OS << "\tLength of river in country: " << R.length;
	return OS;
}

istream& operator>>(istream& IS, River& R) {
	IS >> R.riverName >> R.length;
	return IS;
}
