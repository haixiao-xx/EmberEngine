#include"Render/Buffer/VertexBuffer.h"
#include<glad/glad.h>
namespace Engine
{
	Engine::VertexBuffer::VertexBuffer(float* vertices, unsigned int size)
	{
		glGenBuffers(1, &m_RenderId);
		glBindBuffer(GL_ARRAY_BUFFER, m_RenderId);
		glBufferData(GL_ARRAY_BUFFER, size, vertices, GL_STATIC_DRAW);
	}

	Engine::VertexBuffer::~VertexBuffer()
	{
		glDeleteBuffers(1,&m_RenderId);
	}

	void Engine::VertexBuffer::Bind() const
	{
		glBindBuffer(GL_ARRAY_BUFFER, m_RenderId);
	}

	void Engine::VertexBuffer::Unbind() const
	{
		glBindBuffer(GL_ARRAY_BUFFER, 0);
	}
}

