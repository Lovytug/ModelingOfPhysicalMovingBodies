#pragma once

template<typename Func>
float MethodRungeKutta();

template<typename Func>
float MethodRungeKutta(Func func, float argIntegration);

template<typename Func1, typename Func2> // func2(x, y) = func1(x) + func2(x, y)
float MethodRungeKutta(Func1 func1, Func2 func2, float arg1_Integration, float arg2_Integration);
