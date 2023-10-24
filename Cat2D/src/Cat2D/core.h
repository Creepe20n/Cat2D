#pragma once

#ifdef CT_PLATFORM_WINDOWS
	#ifdef CT_BUILD_DLL
		#define CAT_API __declspec(dllexport)
	#else
		#define CAT_API __declspec(dllimport)
	#endif
#else
	#error Cat2D only supports windwos :(
#endif // CT_PLATFORM_WINDOWS
