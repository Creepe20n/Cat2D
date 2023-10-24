#include<Cat2D.h>

class Sandbox : public Cat2D::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Cat2D::Application* Cat2D::CreateApplication() {
	return new Sandbox();
}