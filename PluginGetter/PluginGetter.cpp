#include <iostream>
#include "PluginGetter.h"
#include <Windows.h>
#include <filesystem>
#include "..\Plugin\Plugin.h"
#include <vector>

bool hasSuffix(const std::wstring &s, const std::wstring &suffix)
{
	return s.size() >= suffix.size() && s.compare(s.size() - suffix.size(), suffix.size(), suffix) == 0;
}

int main()
{

	std::filesystem::directory_iterator dir("");
	std::vector<Plugin> plugins;
	for (auto &p : dir)
	{
		std::wstring path = p.path().wstring();
		if (hasSuffix(path, L".dll"))
		{
			plugins.push_back(Plugin(path.c_str()));
		}
	}

	for (auto &p : plugins)
	{
		p.onLoad();
		std::cout << "Loaded " << p.getName() << std::endl;
	}


	return 0;
}

Plugin::Plugin(const wchar_t * fileName)
{

	HINSTANCE m_lib = LoadLibrary(fileName);

	if (!m_lib)
		throw "Couldn't load Library!";

	getName = (getNameType)GetProcAddress(m_lib, "getName");
	onUpdate = (onUpdateType)GetProcAddress(m_lib, "onUpdate");
	onLoad = (onLoadType)GetProcAddress(m_lib, "onLoad");

	if (!getName)
		throw "Function not loaded";
	if (!onUpdate)
		throw "Function not loaded";
	if (!onLoad)
		throw "Function not loaded";
}
