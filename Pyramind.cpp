#include "Pyramind.h"

Pyramind::Pyramind()
{
	x = 0;
	y = 0;
	z = 0;
}

Pyramind::Pyramind(float X, float Y, float Z)
{
	x = X;
	y = Y;
	z = Z;
}

Pyramind::Pyramind(Pyramind& P)
{
	x = P.x;
	y = P.y;
	z = P.z;
}

float Pyramind::findCap() {
	return x*y*z;
}

