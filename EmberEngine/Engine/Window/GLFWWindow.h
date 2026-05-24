#pragma once
#include"Window/Window.h"

struct GLFWwindow;

namespace Engine
{
	class GLFWWindow :public Window
	{
	public:
		GLFWWindow(const WindowProc& props);
		virtual ~GLFWWindow();
		void OnUpdata() override;
		unsigned int GetWidth() const override;
		unsigned int GetHeight() const override;
	private:
		GLFWwindow* m_window;
		struct WindowData
		{
			std::string Title;
			unsigned int Width;
			unsigned int Height;
		};
		WindowData m_data;
	private:
		void Init(const WindowProc& props);
		void ShutDown();
	};
}
