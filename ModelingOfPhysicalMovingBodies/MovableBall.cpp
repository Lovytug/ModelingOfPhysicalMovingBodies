#include "MovableBall.h"
#include "MethodRungaKutta4.h"

void MovableBall::drawObject()
{

}

void MovableBall::simulateDynamicMovement()
{
	VectorStateCoord copyVecCoord(vecCoord);
	VectorStateVelocity copyVecVelocity(vecVelocity);
	VectorStateAngularVelocity copyVecAngularVelocity(vecAngularVelocity);

	copyVecCoord.vecStateCoord[0] = MethodRungeKutta(DiffEquationCoordX, vecVelocity.vecStateVelocity[0]);
	copyVecCoord.vecStateCoord[1] = MethodRungeKutta(DiffEquationCoordY, vecVelocity.vecStateVelocity[1]);
	copyVecCoord.vecStateCoord[2] = MethodRungeKutta(DiffEquationCoordY, vecVelocity.vecStateVelocity[2]);
	
	copyVecVelocity.vecStateVelocity[0] = MethodRungeKutta(DiffEquationCoordX, DiffEquationVelocityX, vecCoord.vecStateCoord[0], vecVelocity.vecStateVelocity[0]);
	copyVecVelocity.vecStateVelocity[1] = MethodRungeKutta(DiffEquationCoordY, DiffEquationVelocityY, vecCoord.vecStateCoord[1], vecVelocity.vecStateVelocity[1]);
	copyVecVelocity.vecStateVelocity[2] = MethodRungeKutta(DiffEquationCoordZ, DiffEquationVelocityZ, vecCoord.vecStateCoord[2], vecVelocity.vecStateVelocity[2]);

	vecCoord = copyVecCoord;
	vecVelocity = copyVecVelocity;
	vecAngularVelocity = copyVecAngularVelocity;
}

float MovableBall::DiffEquationCoordX(float Vx)
{
	return Vx;
}

float MovableBall::DiffEquationCoordY(float Vy)
{
	return Vy;
}

float MovableBall::DiffEquationCoordZ(float Vz)
{
	return Vz;
}

float MovableBall::DiffEquationVelocityX(float X, float Vx)
{
	return (-1.0f / mass * (coefResistance * X + coefElasticity * Vx));
}

float MovableBall::DiffEquationVelocityY(float Y, float Vy)
{
	return (-1.0f / mass * (coefResistance * Y + coefElasticity * Vy));
}

float MovableBall::DiffEquationVelocityZ(float Z, float Vz)
{
	return (-1.0f / mass * (coefResistance * Z + coefElasticity * Vz));
}

float MovableBall::DiffEquationAngularVelocityX()
{

}

float MovableBall::DiffEquationAngularVelocityY()
{

}

float MovableBall::DiffEquationAngularVelocityZ()
{

}


