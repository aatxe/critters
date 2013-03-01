#include "Global.hpp"

int main() {
	if (!Game::init()) return EXIT_FAILURE;
	while (Window::isOpen()) {
		Game::update();
	}
	Game::unload();
	return EXIT_SUCCESS;
}