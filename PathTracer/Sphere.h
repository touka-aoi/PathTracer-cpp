#pragma once

#include "Object.h"

class Sphere : public Obj
{
public:
	Vec c; // ‹…‚Ì’†S
	double r; // ‹…‚Ì”¼Œa
	Sphere(double r_ = 0, Vec c_ = 0);
	double intersect(const Ray& ray) const override;
	Vec normal(const Vec&) const override;
};