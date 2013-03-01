#include "Global.hpp"

namespace Window {
	sf::Window* Window;

	bool init() {
		Window = new sf::Window(sf::VideoMode::getDesktopMode(), "Critters", sf::Style::Fullscreen);
		Window->setFramerateLimit(60);
		Window->setActive();
		return true;
	}

	void update() {
		sf::Event e;
		while (Window->pollEvent(e)) {
			Events::process(e);
		}
		Window->display();
	}

	void unload() {
		delete Window;
	}
	
	bool isOpen() {
		return Window->isOpen();
	}
	
	unsigned int width() {
		return Window->getSize().y;
	}
	
	unsigned int height() {
		return Window->getSize().x;
	}

	void close() {
		Window->close();
	}
}