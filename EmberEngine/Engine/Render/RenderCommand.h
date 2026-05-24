#pragma once
#include"Render/RenderAPI.h"
#include<memory>
namespace Engine
{
	class RenderCommand
	{
	public:
		static void Init();
		static void SetClearColor(float r, float g, float b, float a);
		static void Clear();
	private:
		static std::unique_ptr<RenderAPI> s_RendererAPI;
	};
}