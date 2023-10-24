#include<Cat2D.h>

class Sandbox : public Cat2D::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};
void main() {
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}