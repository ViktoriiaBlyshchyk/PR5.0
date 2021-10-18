#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\PR5.11\PR5.11\PR5.11.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int x=0, y=0;
			int t;
			t = (y * 1.) / (1 + x * x);
			Assert::AreEqual(t, 0);
		}
	};
}
