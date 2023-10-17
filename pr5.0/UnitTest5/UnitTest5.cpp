#include "pch.h"
#include "CppUnitTest.h"
#include "../pr5.0/pr5.0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(2, 3);
			Assert::AreEqual(t, 0.145796, 0.0000001);
		}
	};
}
