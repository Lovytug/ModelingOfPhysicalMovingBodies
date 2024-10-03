#pragma once
#include <vector>
#include "StaticObject.h"

class ObstaclePolygon : public StaticObject
{
public:
	ObstaclePolygon(Point p1, Point p2, Point p3)
	{
		arrayPolygonPoint.push_back(p1);
		arrayPolygonPoint.push_back(p2);
		arrayPolygonPoint.push_back(p3);
	}
	ObstaclePolygon(Point p1, Point p2, Point p3, Point p4)
	{
		arrayPolygonPoint.push_back(p1);
		arrayPolygonPoint.push_back(p2);
		arrayPolygonPoint.push_back(p3);
		arrayPolygonPoint.push_back(p4);

	}
	ObstaclePolygon(Point p1, Point p2, Point p3, Point p4, Point p5)
	{
		arrayPolygonPoint.push_back(p1);
		arrayPolygonPoint.push_back(p2);
		arrayPolygonPoint.push_back(p3);
		arrayPolygonPoint.push_back(p4);
		arrayPolygonPoint.push_back(p5);
	}

protected:
	void drawObject() override;

private:
	std::vector<Point> arrayPolygonPoint;
};

