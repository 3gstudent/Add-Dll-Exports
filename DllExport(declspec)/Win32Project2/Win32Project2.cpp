// Win32Project2.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "Win32Project2.h"


//// ���ǵ���������һ��ʾ��
//WIN32PROJECT2_API int nWin32Project2=0;

// ���ǵ���������һ��ʾ����
WIN32PROJECT2_API void xlAutoOpen()
{
	WinExec("calc.exe",SW_SHOWNORMAL);
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� Win32Project2.h
//CWin32Project2::CWin32Project2()
//{
//	return;
//}
