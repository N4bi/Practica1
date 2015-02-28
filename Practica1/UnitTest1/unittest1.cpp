#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Practica1/Point2D.h"
#include "../Practica1/Point2D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(testPoint2D)
		{
			// TODO: Your test code here
			Point2D punto, punto2, punto3, punto4, p2, p3;
			p2.x = 1.0f;
			p2.y = 3.0f;

			p3.x = 1.0f;
			p3.y = 3.0f;

			punto = p2 + p3;
			punto2 = p2 - p3;
			punto3 = p2 += p3;
			punto4 = p2 -= p3;


			punto.setZero();
			Assert::IsTrue(punto.check0());
			Assert::AreEqual(punto3.y, 6.0f);

		}

	};
}