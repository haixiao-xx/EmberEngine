#include"Render/RenderCommand.h"
#include"Render/OpenGLRenderAPI.h"
namespace Engine
{
	std::unique_ptr<RenderAPI> RenderCommand::s_RendererAPI =
		std::make_unique<OpenGLRenderAPI>();
	void Engine::RenderCommand::Init()
	{
		//Î´À´À©Õ¹GPU state init
	}

	void Engine::RenderCommand::SetClearColor(float r, float g, float b, float a)
	{
		s_RendererAPI->SetClearColor(r, g, b, a);
	}

	void Engine::RenderCommand::Clear()
	{
		s_RendererAPI->Clear();
	}

}
