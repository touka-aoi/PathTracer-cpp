#include "pch.h"
#include "CppUnitTest.h"
#include "../PathTracer/Vec.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Init0)
		{
			// コンストラクタ
			Vec vec;
			Assert::AreEqual(0.0, vec.x);
			Assert::AreEqual(0.0, vec.y);
			Assert::AreEqual(0.0, vec.z);
		}
		TEST_METHOD(Init1)
		{
			// コンストラクタ
			Vec vec(1.0, 2.0, 3.0);
			Assert::AreEqual(1.0, vec.x);
			Assert::AreEqual(2.0, vec.y);
			Assert::AreEqual(3.0, vec.z);
		}
		
		TEST_METHOD(Plus)
		{
			// 加算
			Vec vec1(1.0, 2.0, 3.0);
			Vec vec2(1.0, 2.0, 3.0);
			Assert::AreEqual(2.0, (vec1 + vec2).x);
			Assert::AreEqual(4.0, (vec1 + vec2).y);
			Assert::AreEqual(6.0, (vec1 + vec2).z);
		}			

		TEST_METHOD(Sub)
		{
			// 減算
			Vec vec1(1.0, 2.0, 3.0);
			Vec vec2(2.0, 1.0, 3.0);
			Assert::AreEqual(-1.0, (vec1 - vec2).x);
			Assert::AreEqual(1.0, (vec1 - vec2).y);
			Assert::AreEqual(0.0, (vec1 - vec2).z);

		}
		TEST_METHOD(Factor)
		{
			// 定数倍
			Vec vec1(1.0, 2.0, 3.0);
			double factor = 2.0;
			Assert::AreEqual(2.0, (vec1 * factor).x);
			Assert::AreEqual(4.0, (vec1  * factor).y);
			Assert::AreEqual(6.0, (vec1  * factor).z);

		}

		TEST_METHOD(Divide)
		{

			// 定数割
			Vec vec1(1.0, 2.0, 3.0);
			double factor = 2.0;
			Assert::AreEqual(0.5, (vec1 / factor).x);
			Assert::AreEqual(1.0, (vec1 / factor).y);
			Assert::AreEqual(1.5, (vec1 / factor).z);

		}

		TEST_METHOD(DOT)
		{
			Vec vec1(1.0, 2.0, 3.0);
			Vec vec2(2.0, 1.0, 3.0);

			Assert::AreEqual(13.0, vec1.dot(vec2));
		}

		TEST_METHOD(CROSS)
		{
			Vec vec1(1.0, 2.0, 3.0);
			Vec vec2(4.0, 5.0, 6.0);

			Assert::AreEqual(-3.0, (vec1 % vec2).x);
			Assert::AreEqual(6.0, (vec1 % vec2).y);
			Assert::AreEqual(-3.0, (vec1 % vec2).z);
		}

		TEST_METHOD(LENGTH)
		{
			Vec vec1(1.0, 2.0, 3.0);
			Assert::AreEqual(std::sqrt(14), vec1.length());
		}

		TEST_METHOD(NORM)
		{
			// 帰り値
			Vec vec1(1.0, 2.0, 3.0);
			Vec result = vec1.norm();
			Assert::AreEqual(1.0, (result.length()));
		}

		TEST_METHOD(NORM1)
		{
			// 本体
			Vec vec1(1.0, 2.0, 3.0);
			vec1.norm();
			Assert::AreEqual(1.0, (vec1.length()));
		}

		TEST_METHOD(MULTI)
		{
			Vec vec1(1.0, 2.0, 3.0);
			Vec vec2(4.0, 5.0, 6.0);

			Assert::AreEqual(4.0, (vec1.mult(vec2)).x);
			Assert::AreEqual(10.0, (vec1.mult(vec2)).y);
			Assert::AreEqual(18.0, (vec1.mult(vec2)).z);

		}

	};
}
