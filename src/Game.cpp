#include "Global.hpp"

namespace Game {
	bool is_active = true;

	bool init() {
		bool ret = true;
		ret &= Window::init();
		ret &= View::init();
		return ret;
	}

	bool isActive() {
		return is_active;
	}

	void setActive(bool active) {
		is_active = active;
	}

	void update() {
		Window::update();
		View::update();
	}

	void unload() {
		View::unload();
		Window::unload();
	}
}