#pragma once
#include "Vec.h"

class Camera
{
public:
	Camera(const double w, const double h, const double fov) : width(w), height(h), fov(fov) {};
	// Perspective Camera
	Vec PerspectiveCamera(const double xp, const double yp)
	{
		double w = width;
		double h = height;
		float fovx = fov;
		float fovy = (h / w) * fovx;
		return Vec(
			((2 * xp - w) / w) * tan(fovx),
			((2 * yp - h) / h) * tan(fovy),
			-1.0
		);
	}
private:
	double width;
	double height;
	double fov;
};