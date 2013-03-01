#pragma once

namespace Window {
	bool init();
	void update();
	void unload();
	bool isOpen();
	unsigned int width();
	unsigned int height();
	void close();
}