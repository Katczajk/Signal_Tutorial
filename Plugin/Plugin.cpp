// Plugin.cpp : Hiermit werden die exportierten Funktionen für die DLL definiert.
//

#include "pch.h"
#include "framework.h"
#include "Plugin.h"
#include <iostream>

const char * plugin::getName()
{
	return "Our first plugin! Yay!";
}

void plugin::onLoad()
{
	std::cout << "Loaded!" << std::endl;
}

void plugin::onUpdate(float deltatime)
{
	std::cout << "Updated!" << std::endl;
}
