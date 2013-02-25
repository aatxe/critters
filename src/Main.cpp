#include "Global.hpp"

int main() {
    sf::Window win(sf::VideoMode(800, 600), "Window");
    while (true) {
        sf::Event e;
        while (win.pollEvent(e)) {
					switch (e.type) {
        		case sf::Event::Closed:
            	exit(0);
            	break;
						default:
							break;
        	}
				}
        win.display();
    }
    return EXIT_SUCCESS;
}