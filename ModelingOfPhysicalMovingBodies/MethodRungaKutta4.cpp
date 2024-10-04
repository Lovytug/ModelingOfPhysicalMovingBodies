#include "MethodRungaKutta4.h"

#define h 1.0f

template<typename Func>
float MethodRungeKutta(Func func, float argIntegration)
{
	float K1, K2, K3, K4;
	K1 = h * func(argIntegration);
	K2 = h * func(argIntegration + K1 / 2.0f);
	K3 = h * func(argIntegration + K2 / 2.0f);
	K4 = h * func(argIntegration + K3);

	return argIntegration + 1.0f / 6.0f * (K1 + 2.0f * K2 + 2.0f * K3 + K4);
}

template<typename Func1, typename Func2>
float MethodRungeKutta(Func1 func1, Func2 func2, float arg1_Integration, float arg2_Integration)
{
	float func1_K1, func1_K2, func1_K3, func1_K4;
	float func2_K1, func2_K2, func2_K3, func2_K4;

	func1_K1 = h * func1(arg1_Integration);
	func1_K2 = h * func1(arg1_Integration + func1_K1 / 2.0f);
	func1_K3 = h * func1(arg1_Integration + func1_K2 / 2.0f);
	func1_K4 = h * func1(arg1_Integration + func1_K3);

	func2_K1 = h * func2(arg1_Integration, arg2_Integration);
	func2_K2 = h * func2(arg1_Integration + func1_K1 / 2.0f, arg2_Integration + func2_K1 / 2.0f);
	func2_K3 = h * func2(arg1_Integration + func1_K2 / 2.0f, arg2_Integration + func2_K2 / 2.0f);
	func2_K4 = h * func2(arg1_Integration + func1_K3, arg2_Integration + func2_K3);

	return arg2_Integration + 1.0f / 6.0f * (func2_K1 + 2.0f * func2_K2 + 2.0f * func2_K3 + func2_K4);
}
