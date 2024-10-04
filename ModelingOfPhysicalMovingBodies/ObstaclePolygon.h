#pragma once
#include <vector>
#include "StaticObject.h"

class ObstaclePolygon : public StaticObject
{
public:
	ObstaclePolygon(std::vector<Point> point)
	{
		arrayPolygonPoint.assign(point.begin(), point.end());
	}

protected:
	void drawObject() override;

private:
	std::vector<Point> arrayPolygonPoint;
};

