#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Practica1/Point2D.h"
#include "../Practica1/Point2D.cpp"
#include "../Practica1/ClassString.h"
#include "../Practica1/ClassString.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		///////////////////////////////////////////
		// Class Point2D
		///////////////////////////////////////////

		TEST_METHOD(testSet0Check0)
		{
			// TODO: Your test code here
			Point2D a, p2, p3;
			p2.x = 1.0f;
			p2.y = 3.0f;

			p3.x = 1.0f;
			p3.y = 3.0f;


			a.setZero();
			Assert::IsTrue(a.check0());
		
		}

		TEST_METHOD(testOperatorAddition)
		{
			Point2D a, p2, p3;
			p2.x = 2.0f;
			p2.y = 3.0f;

			p3.x = 4.0f;
			p3.y = 5.0f;

			a = p2.operator + (p3);

			Assert::AreEqual(a.x, 6.0f);
			Assert::AreEqual(a.y, 8.0f);
		}

		TEST_METHOD(testOperatorSubtract)
		{
			Point2D a, p2, p3;
			p2.x = 2.0f;
			p2.y = 3.0f;

			p3.x = 4.0f;
			p3.y = 5.0f;

			a = p2.operator - (p3);

			Assert::AreEqual(a.x, -2.0f);
			Assert::AreEqual(a.y, -2.0f);
		}

		TEST_METHOD(testOperatorAddEqual)
		{
			Point2D p2, p3;
			p2.x = 2.0f;
			p2.y = 3.0f;

			p3.x = 4.0f;
			p3.y = 5.0f;

			p2.operator += (p3);

			Assert::AreEqual(p2.x, 6.0f);
			Assert::AreEqual(p2.y, 8.0f);
		}

		TEST_METHOD(testOperatorSubtractEqual)
		{
			Point2D p2, p3;
			p2.x = 2.0f;
			p2.y = 3.0f;

			p3.x = 4.0f;
			p3.y = 5.0f;
			
			p2.operator -= (p3);

			Assert::AreEqual(p2.x, -2.0f);
			Assert::AreEqual(p2.y, -2.0f);
		}

		TEST_METHOD(testSame)
		{
			Point2D p2, p3;
			p2.x = 4.0f;
			p2.y = 5.0f;

			p3.x = 4.0f;
			p3.y = 5.0f;


			Assert::IsTrue(p2.operator == (p3));

			
		}

		TEST_METHOD(testNotSame)
		{
			Point2D p2, p3;
			p2.x = 2.0f;
			p2.y = 3.0f;

			p3.x = 4.0f;
			p3.y = 5.0f;


			Assert::IsTrue(p2.operator != (p3));
		}

		TEST_METHOD(testDistance)
		{
			Point2D punto, p2, p3, b;
			p2.x = 2.0f;
			p2.y = 3.0f;

			p3.x = 2.0f;
			p3.y = 4.0f;

			Assert::AreEqual(p2.distanceTo(p3), 1.0f);

		}


		///////////////////////////////////////////
		// Class P2String
		///////////////////////////////////////////

		TEST_METHOD(testClassString)
		{
			P2String string1, string2, string3, string4;
			


		}

	};
}