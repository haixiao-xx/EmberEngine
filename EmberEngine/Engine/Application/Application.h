#pragma once

namespace Engine {
	class Application {
	public:
		Application();
		virtual ~Application();
		void Run();
	private:
		bool m_Running = false;
	};
}
