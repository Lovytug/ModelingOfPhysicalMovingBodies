#pragma once
#include "DynamicObject.h"

class MovableBall : public DynamicObject
{
public:
	MovableBall(float R, VectorStateCoord vec1, VectorStateVelocity vec2, VectorStateAngularVelocity vec3)
	{
		radius = R;
		vecCoord = vec1;
		vecVelocity = vec2;
		vecAngularVelocity = vec3;
	};

protected:
	void drawObject() override;
	void simulateDynamicMovement() override;

private:
	VectorStateCoord vecCoord;
	VectorStateVelocity vecVelocity;
	VectorStateAngularVelocity vecAngularVelocity;
	float radius;
};

