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

		TEST_METHOD(testStringEmpty)
		{
			P2String string1;

			Assert::AreEqual(string1.length(), 0);
		}

		TEST_METHOD(testStringChar)
		{
			P2String string1("qwerty");

			Assert::AreEqual(string1.getString(), "qwerty");
		}

		TEST_METHOD(testStringRef)
		{
			P2String string1("qwerty");
			P2String string2;

			(string1 == string2);

			Assert::AreEqual(string1.getString(), "qwerty");
		}

		TEST_METHOD(testStringCharSame)
		{
			

			P2String string1("hola");
			P2String string2("hola");

			Assert::IsFalse(string1.operator == (string2));
			
		}

		TEST_METHOD(testStringCharNotSame)
		{
			P2String string1("hola");
			P2String string2("asdf");

			Assert::IsTrue(string1.operator != (string2));
		}

		TEST_METHOD(testStringRefSame)
		{
			P2String string1("hola");
			P2String string2("hola");

			Assert::IsFalse(string1.operator == (string2));
		}

		TEST_METHOD(testStringRefNotSame)
		{
			P2String string1("hola");
			P2String string2("asdf");

			Assert::IsTrue(string1.operator != (string2));
		}

		/*TEST_METHOD(testStringAddition)
		{
			P2String string1("hola");
			P2String string2("holaa");
			


		}*/

		TEST_METHOD(testStringLength)
		{
			P2String string1("hola");
			string1.length();

			Assert::AreEqual(string1.length(), 4);
			
			
		}

		TEST_METHOD(testStringCapacity)
		{
			P2String string1("hola");
			string1.capacity();
			Assert::AreEqual(string1.capacity(), 4);
		}

		TEST_METHOD(testStringClear)
		{
			P2String string1("hola");
			string1.clear();
			Assert::AreEqual(string1.length(), 0);
		}

		TEST_METHOD(testStringGetString)
		{
			P2String string1("hola");
			Assert::AreEqual(string1.getString(), "hola");
		}
	};
}