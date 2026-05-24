#pragma once

namespace Engine
{
	class VertexArray
	{
	public:
		VertexArray();
		~VertexArray();
		void Bind() const;
		void Unbind() const;
		void AddBuffer();
		
	private:
		unsigned int m_RenderId;
	};
}