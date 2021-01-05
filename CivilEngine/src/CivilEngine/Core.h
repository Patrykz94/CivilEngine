#pragma once

#ifdef CE_PLATFORM_WINDOWS
	#ifdef CE_BUILD_DLL
		#define CIVIL_API __declspec(dllexport)
	#else
		#define CIVIL_API __declspec(dllimport)
	#endif
#else
	#error CivilEngine only supports Windows!
#endif

#define BIT(x) (1 << x)