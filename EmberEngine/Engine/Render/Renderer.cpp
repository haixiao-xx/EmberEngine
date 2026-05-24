#include"Render/Renderer.h"
//#include"glad/glad.h"
#include"Render/RenderCommand.h"
#include<iostream>

namespace Engine
{
	void Renderer::Init()
	{
		std::cout << "renderer init" << std::endl;
		Engine::RenderCommand::Init();
	}
	void Renderer::ShutDown()
	{
		std::cout << "renderer shutdown." << std::endl;
	}

	void Renderer::BeginFrame()
	{
		//可做 clear color设置
	}

	void Renderer::EndFrame()
	{
		//可做 ： flush/swap hints
	}
	
}
