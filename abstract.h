#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

class Shape {
public:

	virtual float findCap() = 0;

	virtual ~Shape() {};
};