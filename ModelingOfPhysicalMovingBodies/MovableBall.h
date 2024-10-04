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
		coefResistance = 0.5f;
		coefElasticity = 500.0f;
		mass = 0.4f;
		MomentInertia = 2.0f / 5.0f * mass * radius * radius;
	};

protected:
	void drawObject() override;
	void simulateDynamicMovement() override;

private:
	VectorStateCoord vecCoord;
	VectorStateVelocity vecVelocity;
	VectorStateAngularVelocity vecAngularVelocity;
	float radius;
	float mass;
	float coefResistance;
	float coefElasticity;
	float MomentInertia;

	float DiffEquationCoordX(float Vx);
	float DiffEquationCoordY(float Vy);
	float DiffEquationCoordZ(float Vz);
	float DiffEquationVelocityX(float X, float Vx);
	float DiffEquationVelocityY(float Y, float Vy);
	float DiffEquationVelocityZ(float Z, float Vz);
	float DiffEquationAngularVelocityX();
	float DiffEquationAngularVelocityY();
	float DiffEquationAngularVelocityZ();

};

