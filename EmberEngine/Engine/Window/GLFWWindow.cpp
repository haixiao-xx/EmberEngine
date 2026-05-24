#include"Window/GLFWWindow.h"
#include"glad/glad.h"
#include"GLFW/glfw3.h"

#include<iostream>

namespace Engine
{
	GLFWWindow::GLFWWindow(const WindowProc& props)
	{
		Init(props);
	}
	GLFWWindow::~GLFWWindow()
	{
		ShutDown();
	}
	void GLFWWindow::OnUpdata()
	{
		glfwPollEvents();
		glfwSwapBuffers(m_window);
	}
	unsigned int GLFWWindow::GetWidth() const
	{
		return m_data.Width;
	}
	unsigned int GLFWWindow::GetHeight() const
	{
		return m_data.Height;
	}
	void GLFWWindow::Init(const WindowProc& props)
	{
		m_data.Height = props.Height;
		m_data.Title = props.Title;
		m_data.Width = props.Width;
		if (!glfwInit())
		{
			std::cout << "glfwinit failed." << std::endl;
			return;
		}
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

		m_window = glfwCreateWindow(m_data.Width, m_data.Height, m_data.Title.c_str(), NULL, NULL);

		if (!m_window)
		{
			std::cout << "create Window failed." << std::endl;
			return;
		}
		glfwMakeContextCurrent(m_window);
		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
		{
			std::cout << "init glad failed." << std::endl;
			return;
		}

		std::cout << "window created!" << std::endl;
	}
	void GLFWWindow::ShutDown()
	{
		glfwDestroyWindow(m_window);
		glfwTerminate();
	}
}



