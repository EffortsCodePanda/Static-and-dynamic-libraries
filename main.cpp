#include "DynamicDll.h"
#include <stdio.h>
#include <iostream>
#pragma comment(lib,"DynamicDll.lib")
using namespace std;

int main()
{
	CDynamicDll oCDynamicDll;
	fnDynamicDll();
	getchar();
	return 0;
}