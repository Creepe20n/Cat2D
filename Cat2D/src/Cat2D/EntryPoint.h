#pragma once

#ifdef CT_PLATFORM_WINDOWS

extern Cat2D::Application* Cat2D::CreateApplication();

int main(int argc,char** argv) {
	printf("Meow");
	auto App = Cat2D::CreateApplication();
	App->Run();
	delete App;
}
#endif
