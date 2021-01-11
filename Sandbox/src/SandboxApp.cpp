#include <CivilEngine.h>

#include "imgui/imgui.h"

class ExampleLayer : public Civil::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{}

	void OnUpdate() override
	{
		if (Civil::Input::IsKeyPressed(CE_KEY_TAB))
			CE_TRACE("Tab key is pressed!");
	}

	virtual void OnImGuiRender() override
	{
		ImGui::Begin("Test");
		ImGui::Text("Hello World");
		ImGui::End();
	}

	void OnEvent(Civil::Event& event) override
	{
		//CE_TRACE("{0}", event);
	}
};

class Sandbox : public Civil::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}

};

Civil::Application* Civil::CreateApplication()
{
	return new Sandbox();
}