#include "Global.hpp"

bool Game::Active = true;
sf::Window* Game::Window;

bool Game::Init() {
	Game::Window = new sf::Window(sf::VideoMode(800, 600), "Window");
	Game::Window->setFramerateLimit(60);
	bool ret = true;
	ret &= View::Init();
	Game::Window->setActive();
	return ret;
}

void Game::Update() {
	Events::Update();
	View::Update();
	Game::Window->display();
}

void Game::Unload() {
	// View::Unload();
	delete Game::Window;
}