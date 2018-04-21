#include "Include/Core/SoftwareManager.h"

MOA::Core::SoftwareManager* MOA::Core::SoftwareManager::s_pSoftwareManager = nullptr;

MOA::Core::SoftwareManager::~SoftwareManager()
{
	s_pSoftwareManager = nullptr;
}

bool MOA::Core::SoftwareManager::CreateInstance()
{
	if(s_pSoftwareManager == nullptr)
	{
		SoftwareManager();
		return true;
	}
	return false;
}

bool MOA::Core::SoftwareManager::Init()
{
	return false;
}

void MOA::Core::SoftwareManager::Run()
{

}

void MOA::Core::SoftwareManager::Release()
{
	delete s_pSoftwareManager;
}

MOA::Core::SoftwareManager& MOA::Core::SoftwareManager::GetInstance()
{
	return *s_pSoftwareManager;
}

MOA::Core::SoftwareManager::SoftwareManager()
{
	s_pSoftwareManager = this;
}
