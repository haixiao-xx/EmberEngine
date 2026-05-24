#include"Render/OpenGLRenderAPI.h"
#include<glad/glad.h>

namespace Engine
{
	void OpenGLRenderAPI::Init()
	{
	}
	void OpenGLRenderAPI::Clear()
	{
		glClear(GL_COLOR_BUFFER_BIT);
	}
	void OpenGLRenderAPI::SetClearColor(float r, float g, float b, float a)
	{
		glClearColor(r, g, b, a);
	}
}