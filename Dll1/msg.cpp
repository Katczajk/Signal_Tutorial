#include "stdafx.h"
#include "windows.h"

void msg::get_infomsg()
{
	MessageBox(nullptr, "My DLL Text", "Info", MB_OK | MB_ICONINFORMATION);
}
