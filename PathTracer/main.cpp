#include "Vec.h"
#include <iostream>

int main()
{
	Vec vec1(1.0, 2.0, 3.0);
	Vec vec2(2.0, 1.0, 3.0);
	vec1.dot(vec2);
}