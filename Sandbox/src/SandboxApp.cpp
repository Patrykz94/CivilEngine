#include <CivilEngine.h>

class ExampleLayer : public Civil::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{}

	void OnUpdate() override
	{
		CE_INFO("ExampleLayer::Update");
	}

	void OnEvent(Civil::Event& event) override
	{
		CE_TRACE("{0}", event);
	}
};

class Sandbox : public Civil::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Civil::ImGuiLayer());
	}

	~Sandbox()
	{

	}

};

Civil::Application* Civil::CreateApplication()
{
	return new Sandbox();
}