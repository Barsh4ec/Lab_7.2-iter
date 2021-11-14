#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7.2 iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int rowCount = 3;
			const int colCount = 4;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];
			int s = SumMax(a, colCount, rowCount);
			Assert::AreEqual(1, s);

		}
	};
}
