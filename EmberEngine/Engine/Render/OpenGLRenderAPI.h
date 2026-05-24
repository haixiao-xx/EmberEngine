#include"Render/RenderAPI.h"

namespace Engine
{
	class OpenGLRenderAPI :public RenderAPI
	{
	public:
		virtual void Init() override;
		virtual void Clear() override;
		virtual void SetClearColor(
			float r,
			float g,
			float b,
			float a
		) override;
	};
}