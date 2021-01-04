#include <CivilEngine.h>

class Sandbox : public Civil::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Civil::Application* Civil::CreateApplication()
{
	return new Sandbox();
}