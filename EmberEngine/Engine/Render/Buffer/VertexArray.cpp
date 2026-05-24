#include"Render/Buffer/VertexArray.h"
#include"glad/glad.h"

namespace Engine {
	Engine::VertexArray::VertexArray()
	{
		glGenVertexArrays(1, &m_RenderId);
	}

	Engine::VertexArray::~VertexArray()
	{
		glDeleteVertexArrays(1, &m_RenderId);
	}

	void Engine::VertexArray::Bind() const
	{
		glBindVertexArray(m_RenderId);
	}

	void Engine::VertexArray::Unbind() const
	{
		glBindVertexArray(0);
	}

	void Engine::VertexArray::AddBuffer()
	{
		Bind();
		//后面会绑定 vbo，layout 后面再补
	}

}
