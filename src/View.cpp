#include "Global.hpp"

bool View::Init() {
	GLenum err = glewInit();
	if (err != GLEW_OK) {
		std::cerr << "Error: " << glewGetErrorString(err) << "\n";
		exit(err);
	}
	std::cout << "GLEW " << glewGetString(GLEW_VERSION) << " loaded.\n";
	std::cout << "Using OpenGL " << glGetString(GL_VERSION) << ".\n";
	return true;
}

void View::Update() {
	glClearColor(0.4, 0.6, 0.9, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
}