#include "Global.hpp"

namespace Events {
	void Process(sf::Event e) {
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
			default:
				break;
		}
	}
}