#pragma once



class Plugin
{

private:
	typedef const char*(*getNameType)();
	typedef void(*onLoadType)();
	typedef void(*onUpdateType)(float);


public:
	Plugin(const wchar_t *fileName);

	getNameType getName;
	onLoadType onLoad;
	onUpdateType onUpdate;
};