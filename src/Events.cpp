#include "Global.hpp"

void Events::Update() {
	sf::Event e;
	while(Game::Window->pollEvent(e)) {
		switch (e.type) {
			case sf::Event::Closed:
				Game::Window->close();
				break;
			case sf::Event::GainedFocus:
				Game::Active = true;
				break;
			case sf::Event::LostFocus:
				Game::Active = false;
				break;
			default:
				break;
		}
	}
}