#include "pch.h"
#include "CppUnitTest.h"
#include "../PathTracer/Vec.h"
#include "../PathTracer/Ray.h"
#include "../PathTracer/Sphere.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void AreEqualVec(const Vec& vec1, const Vec& vec2)
{
	Assert::AreEqual(vec1.x, vec2.x);
	Assert::AreEqual(vec1.y, vec2.y);
	Assert::AreEqual(vec1.z, vec2.z);
}

namespace ShpereTest
{
	TEST_CLASS(SphereTest)
	{
	public:

		TEST_METHOD(CREATESPHERE)
		{
			// コンストラクタ
			Sphere sphere;
			// 中心
			AreEqualVec(sphere.c, Vec(0, 0, 0));
			// 半径の長さ
			Assert::AreEqual(sphere.r, 0.0);
		}

		TEST_METHOD(CREATESPHERE2)
		{
			// コンストラクタ
			Sphere sphere(3, Vec(1.0, 2.0, 3.0));
			// 中心
			AreEqualVec(sphere.c, Vec(1.0, 2.0, 3.0));
			// 半径の長さ
			Assert::AreEqual(sphere.r, 3.0);
		}

		TEST_METHOD(INTERSECTION)
		{
			// コンストラクタ
			Sphere sphere(3, Vec(1.0, 2.0, 3.0));
			// 中心
			AreEqualVec(sphere.c, Vec(1.0, 2.0, 3.0));
			// 半径の長さ
			Assert::AreEqual(sphere.r, 3.0);
		}
	};
}

