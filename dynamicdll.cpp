// DynamicDll.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "DynamicDll.h"
#include <iostream>
using namespace std;


// ���ǵ���������һ��ʾ��
DYNAMICDLL_API int nDynamicDll=0;

// ���ǵ���������һ��ʾ����
DYNAMICDLL_API int fnDynamicDll(void)
{
	cout << "call the dynamic dll --yinh" << endl;
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� DynamicDll.h
CDynamicDll::CDynamicDll()
{
	cout << "create duixiang  --yinh"  << endl;
	return;
}
