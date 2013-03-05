#include "Global.hpp"

namespace Camera {
	sf::Vector2f position;
	
	sf::Vector2f getPosition() {
		return position;
	}
	
	void setPosition(sf::Vector2f pos) {
		position = pos;
	}
	
	void setPosition(float x, float y) {
		position = sf::Vector2f(x, y);
	}
	
	float getX() {
		return position.x;
	} 
	
	void setX(float x) {
		position.x = x;
	}
	
	float getY() {
		return position.y;
	}
	
	void setY(float y) {
		position.y = y;
	}
	
	void translate(sf::Vector2f trans) {
		position += trans;
	}
	
	void translate(float x, float y) {
		position += sf::Vector2f(x, y);
	}
	
	void translateX(float x) {
		position += sf::Vector2f(x, 0);
	}
	
	void translateY(float y) {
		position += sf::Vector2f(0, y);
	}
}