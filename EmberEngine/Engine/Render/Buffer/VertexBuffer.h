#pragma once

namespace Engine
{
	class VertexBuffer
	{
	private:
		unsigned int m_RenderId;
	public:
		VertexBuffer(float* vertices, unsigned int size);
		~VertexBuffer();
		void Bind() const;
		void Unbind() const;

	};
}