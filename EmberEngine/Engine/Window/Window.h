#pragma once

#include<string>

namespace Engine
{
	struct WindowProc
	{
		std::string Title;
		unsigned int Width;
		unsigned int Height;
		WindowProc(const std::string& title = "mimi", unsigned int width = 1280,
			unsigned int height = 720) :Title(title), Width(width), Height(height)
		{

		}
		
	};
	class Window
	{
	public:
		virtual ~Window() = default;
		virtual void OnUpdata() = 0;
		virtual unsigned int GetWidth() const = 0;
		virtual unsigned int GetHeight() const = 0;
	};
}
