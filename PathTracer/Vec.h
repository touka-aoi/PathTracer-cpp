#pragma once

class Vec {
public:
	double x, y, z;

	Vec(double x0 = 0.0, double y0 = 0.0, double z0 = 0.0);
	Vec operator+(const Vec& b);
	Vec operator-(const Vec& b);
	Vec operator*(double b);
	Vec operator/(double b);
	Vec operator%(Vec& b);
	Vec mult(const Vec& b);
	Vec& norm();
	double length();
	double dot(const Vec& b);
};