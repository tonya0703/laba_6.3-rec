#include "pch.h"
#include "CppUnitTest.h"
#include "../ap_6.3 REC/6.3 REC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63REC
{
	TEST_CLASS(UnitTest63REC)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[] = { 1,3,-5,4,-6 };
			int S = (t, 4);
			Assert::AreEqual(10, 10);
		}
	};
}
