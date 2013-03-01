#include "Global.hpp"

namespace Events {
	void process(sf::Event e) {
		switch (e.type) {
			case sf::Event::Closed:
				Window::close();
				break;
			case sf::Event::GainedFocus:
				Game::setActive(true);
				break;
			case sf::Event::LostFocus:
				Game::setActive(false);
				break;
			case sf::Event::KeyPressed:
				if (e.key.code == sf::Keyboard::Q)
					Window::close();
				break;
			default:
				break;
		}
	}
}