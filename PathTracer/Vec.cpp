#include "Vec.h"
#include <cmath>

#define EPSILON 0.0001

Vec::Vec(double x0, double y0, double z0) { x = x0; y = y0; z = z0; }
Vec Vec::operator+(const Vec& b) { return Vec(x + b.x, y + b.y, z + b.z); }
Vec Vec::operator-(const Vec& b) { return Vec(x - b.x, y - b.y, z - b.z); }
Vec Vec::operator*(double b) { return Vec(x * b, y * b, z * b); }
Vec Vec::operator/(double b) { return Vec(x / b, y / b, z / b); }
Vec Vec::operator%(Vec& b) { return Vec(y * b.z - z * b.y, z * b.x - x * b.z, x * b.y - y * b.x); } // cross product
Vec Vec::mult(const Vec& b) { return Vec(x * b.x, y * b.y, z * b.z); };
Vec& Vec::norm() { return *this = *this * (1 / std::sqrt(x * x + y * y + z * z)); }; // 単位ベクトル
double Vec::length() { return std::sqrt(x * x + y * y + z * z); };
double Vec::dot(const Vec& b) { return x * b.x + y * b.y + z * b.z; };

