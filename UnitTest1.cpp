#include "pch.h"
#include "CppUnitTest.h"
#include "D:\My\C++learning\vbnm\vbnm\abstract.h"
#include "D:\My\C++learning\vbnm\vbnm\ball.cpp"
#include "D:\My\C++learning\vbnm\vbnm\ball.h"
#include "D:\My\C++learning\vbnm\vbnm\Pyramind.cpp"
#include "D:\My\C++learning\vbnm\vbnm\Pyramind.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestBall)
		{
			Ball ball(8);

			int capacity = ball.findCap();

			int expected = 2144;

			Assert::AreEqual(capacity, expected);

		}

		TEST_METHOD(TestPyramind)
		{
			Pyramind pyramind(8, 4, 2);

			float capacity = pyramind.findCap();

			float expected = 64;

			Assert::AreEqual(capacity, expected);

		}
	};
}
