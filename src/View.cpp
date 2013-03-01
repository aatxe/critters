#include "Global.hpp"

namespace View {
	Program *p;
	
	bool init() {
		GLenum err = glewInit();
		if (err != GLEW_OK) {
			std::cerr << "Error: " << glewGetErrorString(err) << "\n";
			exit(err);
		}
		std::cout << "GLEW " << glewGetString(GLEW_VERSION) << " loaded.\n";
		std::cout << "Using OpenGL " << glGetString(GL_VERSION) << ".\n";
		p =  new Program();
		Shader vert("Vert", Shader::type::vertex);
		Shader frag("Frag", Shader::type::fragment);
		p->attach(vert);
		p->attach(frag);
		p->link();
		return true;
	}

	void update() {
		glClearColor(0.4, 0.6, 0.9, 1.0);
		glClear(GL_COLOR_BUFFER_BIT);
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.4, 0.5);
		glVertex2f(0.5, 0.5);
		glVertex2f(-0.5, 0.5);
		glVertex2f(-0.5, -0.5);
		glVertex2f(0.5, -0.5);
		glEnd();
	}

	void unload() {
		delete p;
	}
}