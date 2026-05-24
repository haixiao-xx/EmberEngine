#pragma once
#include<string>
namespace Engine
{
	class Shader
	{
		Shader(const std::string& vertexSrc, const std::string& fragmentSrc);
		~Shader();
		void Bind() const;
		void Unbind() const;
	private:
		unsigned int m_RenderId;
	};
}