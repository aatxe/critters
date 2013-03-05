#pragma once

namespace Camera {
	sf::Vector2f getPosition();
	void setPosition(sf::Vector2f pos);
	void setPosition(float x, float y);
	float getX();
	void setX(float x);
	float getY();
	void setY(float y);
	void translate(sf::Vector2f trans);
	void translate(float x, float y);
	void translateX(float x);
	void translateY(float y);
}