// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WIN32PROJECT2_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WIN32PROJECT2_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef WIN32PROJECT2_EXPORTS
#define WIN32PROJECT2_API __declspec(dllexport)
#else
#define WIN32PROJECT2_API __declspec(dllimport)
#endif
#pragma comment(linker, "/EXPORT:xlAutoOpen=?xlAutoOpen@@YAXXZ")
// �����Ǵ� Win32Project2.dll ������
//class WIN32PROJECT2_API CWin32Project2 {
//public:
//	CWin32Project2(void);
	// TODO: �ڴ�������ķ�����
//};

//extern WIN32PROJECT2_API int nWin32Project2;

WIN32PROJECT2_API void xlAutoOpen();
