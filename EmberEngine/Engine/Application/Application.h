#pragma once
#include"Window/Window.h"
#include<memory>
namespace Engine {
	class Application {
	public:
		Application();
		virtual ~Application();
		void Run();
	private:
		bool m_Running = false;
		std::unique_ptr<Window> m_Window;
	};
}
