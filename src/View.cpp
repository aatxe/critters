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
		
		// Setup the view
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrtho(Camera::getX() - (Window::width() / 2), Camera::getX() + (Window::width() / 2), Camera::getY() - (Window::height() / 2), Camera::getY() + (Window::height() / 2), -1, 1);
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		glViewport(0, 0, Window::width(), Window::height());
		glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
		
		// Draw a rectangle
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.4, 0.5);
		glVertex2f(50, 50);
		glVertex2f(-50, 50);
		glVertex2f(-50, -50);
		glVertex2f(50, -50);
		glEnd();
	}

	void unload() {
		delete p;
	}
}