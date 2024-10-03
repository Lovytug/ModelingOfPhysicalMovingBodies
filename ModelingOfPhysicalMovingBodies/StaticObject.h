#pragma once

struct Point
{
	Point(float x, float y, float z) : X(x), Y(y), Z(z) {};
	float X;
	float Y;
	float Z;
};

class StaticObject
{
public:
	virtual void drawObject() = 0;
};