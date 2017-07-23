// Win32Project2.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Win32Project2.h"


//// 这是导出变量的一个示例
//WIN32PROJECT2_API int nWin32Project2=0;

// 这是导出函数的一个示例。
WIN32PROJECT2_API void xlAutoOpen()
{
	WinExec("calc.exe",SW_SHOWNORMAL);
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 Win32Project2.h
//CWin32Project2::CWin32Project2()
//{
//	return;
//}
