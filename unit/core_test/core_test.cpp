// core_test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Tests.h"

int Foo(int a, int b)

{

	if (a == 0 || b == 0)

	{

		throw "don't do that";

	}

	int c = a % b;

	if (c == 0)

		return b;

	return Foo(b, c);

}

int _tmain(int argc, _TCHAR* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

