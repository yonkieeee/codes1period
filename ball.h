#pragma once
#include "abstract.h"
#define PI 3.14159	

class Ball : public Shape{
private:
	float radius;
public:

	Ball();
	Ball(float R);
	Ball(Ball& B);

	float findCap();
};