#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08.1.string/Lab_08.1.string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest813
{
	TEST_CLASS(UnitTest813)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(0, Count(""));
			Assert::AreEqual(0, Count("abc"));
			Assert::AreEqual(1, Count("no"));
			Assert::AreEqual(1, Count("on"));
			Assert::AreEqual(4, Count("nono on xyz"));
		}
		TEST_METHOD(TestMethod2)
		{
			string s;

			s = "no";
			Assert::AreEqual(string("***"), Replace(s));

			s = "on";
			Assert::AreEqual(string("***"), Replace(s));

			s = "abc";
			Assert::AreEqual(string("abc"), Replace(s));

			s = "nono on xyz";
			Assert::AreEqual(string("****** *** xyz"), Replace(s));

			s = "n";
			Assert::AreEqual(string("n"), Replace(s));

			s = "";
			Assert::AreEqual(string(""), Replace(s));
		}
	};
}
