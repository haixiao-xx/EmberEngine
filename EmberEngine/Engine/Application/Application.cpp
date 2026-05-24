#include"Application.h"
#include"Window/GLFWWindow.h"
#include"Render/Renderer.h"
#include"Render/RenderCommand.h"
#include<iostream>

namespace Engine {
	Application::Application() { 
		m_Running = true; 
		m_Window = std::make_unique<GLFWWindow>(WindowProc()); 
		Engine::Renderer::Init();
		std::cout << "application create" << std::endl; 
	}
	Application::~Application()
	{
		Engine::Renderer::ShutDown();
		std::cout << "application Destroyed." << std::endl;
		
	}
	void Application::Run()
	{
		std::cout << "applicationg running." << std::endl;
		Engine::RenderCommand::SetClearColor(0.1f, 0.1f, 0.3f, 1.0f);
		while (m_Running)
		{
			m_Window->OnUpdata();
			Engine::RenderCommand::Clear();
			
		}
	}
}