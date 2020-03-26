#pragma once

#ifdef EXPORT

	#define dllimportexport dllexport

#else

	#define dllimportexport dllexport

#endif // EXPORT


namespace msg {

	// __declspec(dllimportexport) void get_infomsg();


}