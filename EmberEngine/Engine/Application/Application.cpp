#include"Application.h"
#include"Window/GLFWWindow.h"
#include<iostream>

namespace Engine {
	Application::Application() { m_Running = true; m_Window = std::make_unique<GLFWWindow>(WindowProc()); std::cout << "application create" << std::endl; }
	Application::~Application()
	{
		std::cout << "application Destroyed." << std::endl;
		
	}
	void Application::Run()
	{
		std::cout << "applicationg running." << std::endl;
		while (m_Running)
		{
			m_Window->OnUpdata();
		}
	}
}