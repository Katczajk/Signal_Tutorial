#ifdef PLUGIN_EXPORTS
#define PLUGIN_API __declspec(dllexport)
#else
#define PLUGIN_API __declspec(dllimport)
#endif


namespace plugin
{

	extern "C"
	{
		__declspec(dllexport) const char * getName();
		__declspec(dllexport) void onLoad();
		__declspec(dllexport) void onUpdate(float deltaTime);
	}

}