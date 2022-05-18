#include "Download_Spoofer.h"

int main() 
{
	SetConsoleTitleA("EAC Spoofer");
	MessageBoxA(0, "Pls make sure, what u have 1803 version or 1903 version of Windows 10", "EAC Spoofer", MB_OK | MB_ICONEXCLAMATION);
	DownloadSpoofer();
	Sleep(500);
	system("C:\\Windows\\System\\command.exe C:\\Windows\\System\\gdrv.sys C:\\Windows\\System\\Driver.sys");
	cout << "Spoofing is Complete... Pls Restart Ur Computer to take changes!!!" << endl;
	Sleep(6000);
	return 0;
}