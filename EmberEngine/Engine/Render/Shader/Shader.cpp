#include"Render/Shader/Shader.h"
#include<glad/glad.h>
#include<iostream>
namespace Engine
{
	static void OutputLinkLog(unsigned int id)
	{
		int success;
		glGetProgramiv(id, GL_LINK_STATUS, &success);
		if (success == GL_FALSE)
		{
			std::cout << 
				"Link failed." << std::endl;
			int length;
			glGetProgramiv(id, GL_INFO_LOG_LENGTH, &length);
			if (length)
			{
				char* log = (char*)malloc(sizeof(char) * length);
				glGetProgramInfoLog(id, sizeof(char) * length, &length, log);
				std::cout << log << std::endl;
			}
		}
		else
		{
			std::cout  <<
				"link success." << std::endl;
		}
	}

	static void OutputCompileLog(unsigned int id, unsigned int type)
	{
		int success;
		glGetShaderiv(id, GL_COMPILE_STATUS, &success);
		if (success == GL_FALSE)
		{
			std::cout << (type == GL_VERTEX_SHADER ? "vertex shader " : "fragment shader ") <<
				"compile failed." << std::endl;
			int length;
			glGetShaderiv(id, GL_INFO_LOG_LENGTH, &length);
			if (length)
			{
				char* log = (char*)malloc(sizeof(char) * length);
				glGetShaderInfoLog(id, sizeof(char) * length, &length, log);
				std::cout << log << std::endl;
			}
		}
		else
		{
			std::cout << (type == GL_VERTEX_SHADER ? "vertex shader " : "fragment shader ") <<
				"compile success." << std::endl;
		}
	}
	static unsigned int CompileShader(unsigned int type, const std::string& src)
	{
		unsigned int id = glCreateShader(type);
		const char* cstr = src.c_str();
		glShaderSource(id, 1, &cstr, nullptr);
		glCompileShader(id);
		OutputCompileLog(id, type);
		return id;
	}

	Engine::Shader::Shader(const std::string& vertexSrc, const std::string& fragmentSrc)
	{
		unsigned int vs = CompileShader(GL_VERTEX_SHADER, vertexSrc);
		unsigned int fs = CompileShader(GL_FRAGMENT_SHADER, fragmentSrc);

		m_RenderId = glCreateProgram();
		glAttachShader(m_RenderId, vs);
		glAttachShader(m_RenderId, fs);
		glLinkProgram(m_RenderId);
		OutputLinkLog(m_RenderId);
		//delete
		glDeleteShader(vs);
		glDeleteShader(fs);
	}

	Engine::Shader::~Shader()
	{
		
	}

	void Engine::Shader::Bind() const
	{
		glUseProgram(m_RenderId);
	}

	void Engine::Shader::Unbind() const
	{
		glUseProgram(0);
	}
}

