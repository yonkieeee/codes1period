#pragma once
#include "abstract.h"
using namespace std;

class Pyramind: public Shape{
private:
    float x;
    float y;
    float z;
public:

    Pyramind();
    Pyramind(float X, float Y, float Z);
    Pyramind(Pyramind& P);

    float findCap();
};



