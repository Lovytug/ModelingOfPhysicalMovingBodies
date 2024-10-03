#pragma once
#include <array>

struct VectorStateCoord
{
	VectorStateCoord() = default;
	VectorStateCoord(float X, float Y, float Z)
	{
		vecStateCoord[0] = X;
		vecStateCoord[1] = Y;
		vecStateCoord[2] = Z;
	}

	std::array<float, 3> vecStateCoord;
};
struct VectorStateVelocity
{
	VectorStateVelocity() = default;
	VectorStateVelocity(float Vx, float Vy, float Vz)
	{
		vecStateVelocity[0] = Vx;
		vecStateVelocity[1] = Vy;
		vecStateVelocity[2] = Vz;
	}

	std::array<float, 3> vecStateVelocity;
};

struct VectorStateAngularVelocity
{
	VectorStateAngularVelocity() = default;
	VectorStateAngularVelocity(float Wx, float Wy, float Wz)
	{
		vecStateAngularVelocity[0] = Wx;
		vecStateAngularVelocity[1] = Wy;
		vecStateAngularVelocity[2] = Wz;
	}

	std::array<float, 3> vecStateAngularVelocity;
};

class DynamicObject
{
public:
	virtual void drawObject() = 0;
	virtual void simulateDynamicMovement() = 0;
};

