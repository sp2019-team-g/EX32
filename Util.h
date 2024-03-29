#ifndef UTIL_EX32_H
#define UTIL_EX32_H
#define _USE_MATH_DEFINES



#include <random>
#include <cmath>
#include <ctime>
#include <functional>
#include <iostream>
#include <vector>
#include <complex>


namespace UtilFunc
{
    std::complex<double> I(std::complex<double>, std::complex<double>);
    std::complex<double> numericalDiff(std::function<std::complex<double>(double)>, double, double);
    std::complex<double> numericalDiff2(std::function<std::complex<double>(double)>, double, double);
    double normalRnd(double, double);
    double ncChi2Rnd(double, double);
    double uniRnd(double, double);
    double rvs(std::function<double(double)>,double);
    template<class T> T max(T a, T b)
    {
    	if(a>b)
    		return a;
    	return b;
    }
}
namespace UF = UtilFunc;


#endif


