#include "Global.hpp"

namespace Window {
	sf::Window* Window;

	bool Init() {
		Window = new sf::Window(sf::VideoMode(800, 600), "Window");
		Window->setFramerateLimit(60);
		Window->setActive();
		return true;
	}

	void Update() {
		sf::Event e;
		while (Window->pollEvent(e)) {
			Events::Process(e);
		}
		Window->display();
	}

	void Unload() {
		delete Window;
	}
	
	bool isOpen() {
		return Window->isOpen();
	}

	void close() {
		Window->close();
	}
}