#define UNICODE
#define _UNICODE
#include <windows.h>
#include <stdio.h>
#include <TCHAR.h>
#pragma warning( disable : 4996)
 
static int count;
static long long size;
 
int main() {
    HANDLE hFind;                   	// ����� ������
    WIN32_FIND_DATA res;            	// ��������� ������
 
    hFind = FindFirstFile(L"C:\\Users\\student\\*", &res);   // ����� ������ ����
 
    do {
        if ((res.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) != 0 &&
			_tcscmp(res.cFileName, TEXT("..")) != 0 &&
			_tcscmp(res.cFileName, TEXT(".")) != 0) { // ���� ��� ��������
				_tprintf(TEXT("%s\n"), res.cFileName);
        }
    } while (FindNextFile(hFind, &res) != 0);
    FindClose(hFind);
    return 0;
}