﻿// DynamicDll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "DynamicDll.h"
#include <iostream>
using namespace std;


// 这是导出变量的一个示例
DYNAMICDLL_API int nDynamicDll=0;

// 这是导出函数的一个示例。
DYNAMICDLL_API int fnDynamicDll(void)
{
	cout << "call the dynamic dll --yinh" << endl;
	return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 DynamicDll.h
CDynamicDll::CDynamicDll()
{
	cout << "create duixiang  --yinh"  << endl;
	return;
}
