#pragma once
#include "core.h"
namespace Cat2D {
	class CAT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	//To be deffined in Client
	Application* CreateApplication();
}


