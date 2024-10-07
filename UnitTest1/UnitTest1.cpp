#include "pch.h"
#include "CppUnitTest.h"
#include "cmath"
#include "../Pr5.0/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1.0;
				double y = 2.0;
				double z = g(pow(x, 2), 1, y) - g(pow(y, 2), x, 1);

				double expected = -8.352441;

				Assert::AreEqual(expected, z, 1e-6);
		}
	};
}
