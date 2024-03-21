#include "ball.h"



Ball::Ball()
{
	radius = 0;
}

Ball::Ball(float R)
{
	radius = R;
}

Ball::Ball(Ball& B)
{
	radius = B.radius;
}

float Ball::findCap()
{
	return (4.0 / 3.0) * PI * pow(radius, 3);
}
