#include "MathFunction.h"

using namespace std;

double MathFunction::degToRad(int _degree)
{
	return _degree * M_PI / 180;
}

double MathFunction::radToDeg(double _radian)
{
	return _radian * 180 /M_PI;
}

