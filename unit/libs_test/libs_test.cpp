// libs_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "test.h"

int _tmain(int argc, _TCHAR* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

