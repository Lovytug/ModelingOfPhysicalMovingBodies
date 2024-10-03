#pragma once
#include "StaticObject.h"

class ObstacleSphere : public StaticObject
{
public:
	ObstacleSphere(float R, Point p) : point(p), radius(R) {};

protected:
	void drawObject() override;

private:
	Point point;
	float radius;
};

