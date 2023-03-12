#pragma once
#include "Vec.h"
#include "Ray.h"

class Obj
{
public:
	Vec cl; // color
	double emission;
	int type; // BRDF type
	void setMat(Vec cl_ = 0, double emission_ = 0, int type_ = 0) { cl = cl_; emission = emission_; type = type_; };
	virtual double intersect(const Ray&) const = 0; // ÚGŠÖ”
	virtual Vec normal(const Vec&) const = 0;  // –@üŠÖ”
};