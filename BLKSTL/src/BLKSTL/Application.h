#pragma once

#include "Core.h"

namespace BLKSTL
{
	class BLKSTL_API Application
	{

	public:
		Application();
		virtual ~Application();

		void run();


	};

	Application* CreateApplication();
}
