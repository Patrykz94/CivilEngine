#pragma once

#ifdef CE_PLATFORM_WINDOWS

extern Civil::Application* Civil::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Civil::CreateApplication();
	app->Run();
	delete app;
}

#endif