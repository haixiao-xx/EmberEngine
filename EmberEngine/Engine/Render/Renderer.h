#pragma once
namespace Engine
{
	class Renderer
	{
	public:
		static void Init();
		static void ShutDown();
		static void BeginFrame();
		static void EndFrame();
	};
}

