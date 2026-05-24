#pragma once

namespace Engine
{
	class RenderAPI
	{
	public:
		virtual ~RenderAPI() = default;
		virtual void Init() = 0;
		virtual void Clear() = 0;
		virtual void SetClearColor(
			float r,
			float g,
			float b,
			float a
		) = 0;
	};
}
