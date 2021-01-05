#pragma once

#ifdef CE_PLATFORM_WINDOWS

extern Civil::Application* Civil::CreateApplication();

int main(int argc, char** argv)
{
	Civil::Log::Init();
	CE_CORE_WARN("Initialized Log!");
	CE_INFO("Hello!");

	auto app = Civil::CreateApplication();
	app->Run();
	delete app;
}

#endif