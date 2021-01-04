#pragma once

#include "Core.h"

namespace Civil {

	class CIVIL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}