#pragma once
#include "Vec.h"
#define PI 3.14159265 

static Vec hemisphere(double u1, double u2)
{
	const double r = sqrt(1.0 - u1 * u1);
	const double phi = 2 * PI * u2;
	return Vec(cos(phi) * r, sin(phi) * r, u1);
}