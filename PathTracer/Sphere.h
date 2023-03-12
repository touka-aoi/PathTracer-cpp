#pragma once

#include "Object.h"

class Sphere : public Obj
{
public:
	Vec c; // ���̒��S
	double r; // ���̔��a
	Sphere(double r_ = 0, Vec c_ = 0);
	double intersect(const Ray& ray) const override;
	Vec normal(const Vec&) const override;
};