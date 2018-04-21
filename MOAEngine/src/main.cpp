#include <Windows.h>
#include "Include\Core\SoftwareManager.h"



int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow)
{
	if (MOA::Core::SoftwareManager::CreateInstance())
	{
		if (MOA::Core::SoftwareManager::GetInstance().Init())
		{
			MOA::Core::SoftwareManager::GetInstance().Run();
		}
	}
	else
	{
		return -1;
	}

	return 0;
}