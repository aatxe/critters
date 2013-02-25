#include "Global.hpp"

int main() {
	if (!Game::Init()) return EXIT_FAILURE;
	while (Game::Window->isOpen()) {
		Game::Update();
	}
	Game::Unload();
	return EXIT_SUCCESS;
}