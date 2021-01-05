#include "Application.h"

#include "CivilEngine/Events/ApplicationEvent.h"
#include "CivilEngine/Log.h"

namespace Civil {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			CE_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			CE_TRACE(e);
		}

		while (true);
	}

}