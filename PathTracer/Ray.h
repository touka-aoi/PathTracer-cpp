#pragma once
#include "Vec.h"

struct Ray
{
	Vec o, d; // origin, direction
	Ray(Vec o0 = 0.0, Vec d0 = 0.0) { o = o0; d = d0; };
};