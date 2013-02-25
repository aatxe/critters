#include "Global.hpp"

namespace Game {
	bool Active = true;

	bool Init() {
		bool ret = true;
		ret &= Window::Init();
		ret &= View::Init();
		return ret;
	}

	bool isActive() {
		return Active;
	}

	void setActive(bool active) {
		Active = active;
	}

	void Update() {
		Window::Update();
		View::Update();
	}

	void Unload() {
		View::Unload();
		Window::Unload();
	}
}