#include "stdafx.h"
#include "CLRWrapper.h"

using namespace WPFDccPlugin::Manager;

void CLRWrapper::UpdateUI()
{
	PluginManager::Instance->UpdateUI("Button Name Changed");
}
