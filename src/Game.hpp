#pragma once

namespace Game {
	bool Init();
	void Update();
	void Unload();
	extern sf::Window* Window;
	extern bool Active;
}