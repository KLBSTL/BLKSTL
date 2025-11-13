#pragma once


#ifdef BK_PLATFORM_WINDOWS
	#ifdef BK_BUILD_DLL
		#define BLKSTL_API __declspec(dllexport)
	#else
		#define BLKSTL_API __declspec(dllimport)
	#endif

#else
	#error BLKSTL only support windows!

#endif

