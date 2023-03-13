#include "Sphere.h"
#include <cmath>

#define eps 1e-6

Sphere::Sphere(double r_, Vec c_) : 
	r(r_), // raidas 
	c(c_) // center
{
}


double Sphere::intersect(const Ray& ray) const
{
	double b = ((ray.o - c) * 2).dot(ray.d);
	double c_ = (ray.o - c).dot(ray.o - c)-(r*r);
	double disc = b * b - 4 * c_;
	if (disc < 0) return 0;
	else disc = std::sqrt(disc);
	double sol1 = -b - disc;
	double sol2 = -b + disc;
	return (sol2 > eps) ? sol2 / 2 : ((sol1 > eps) ? sol1 / 2 : 0);
}

Vec Sphere::normal(const Vec& p0) const
{
	return Vec(
		(p0.x - c.x) / r,
		(p0.y - c.y) / r,
		(p0.z - c.z) / r);
}
