#pragma once

#include "CivilEngine/Layer.h"

#include "CivilEngine/Events/ApplicationEvent.h"
#include "CivilEngine/Events/KeyEvent.h"
#include "CivilEngine/Events/MouseEvent.h"

namespace Civil {

	class CIVIL_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer();

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnImGuiRender() override;

		void Begin();
		void End();
	private:
		float m_Time = 0.0f;
	};

}