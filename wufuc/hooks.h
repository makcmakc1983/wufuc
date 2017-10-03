#pragma once

#include <phnt_windows.h>

typedef struct tagLANGANDCODEPAGE
{
        WORD wLanguage;
        WORD wCodePage;
} LANGANDCODEPAGE, *PLANGANDCODEPAGE;

typedef LSTATUS(WINAPI *LPFN_REGQUERYVALUEEXW)(HKEY, LPCWSTR, LPDWORD, LPDWORD, LPBYTE, LPDWORD);
typedef HMODULE(WINAPI *LPFN_LOADLIBRARYEXW)(LPCWSTR, HANDLE, DWORD);

LSTATUS WINAPI RegQueryValueExW_Hook(HKEY hKey, LPCWSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);
HMODULE WINAPI LoadLibraryExW_Hook(LPCWSTR lpFileName, HANDLE hFile, DWORD dwFlags);