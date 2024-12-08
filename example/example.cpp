#include <SFML\Graphics.hpp>
#include <iostream>
#include "../include/manager.hpp"
#include "../include/button.hpp"
#include "../include/text.hpp"

int main() {
    Manager manager;
    sf::RenderWindow window(sf::VideoMode(800, 600), "SGUPP Implementation example");
    Button _basicButton(sf::Vector2f(50, 100), sf::Vector2f(130, 60), true, []() {std::cout << "Click\n";}); // position, size, visible?, callback when click
    Text _basicText(sf::Vector2f(0, 0), sf::Vector2f(0.6f, 0.6f), true, "Hello World!"); // position, size, visible?, text

    window.setFramerateLimit(20);
    _basicText.attachButton(_basicButton);

    _basicButton.setColor(sf::Color::Cyan);
    _basicButton.setHoverColor(sf::Color::Blue);

    manager.addButton(_basicButton);
    manager.addText(_basicText);

    while (window.isOpen()) {
        window.clear(sf::Color::White);
        sf::Event event;
        while(window.pollEvent(event)) {
            switch(event.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
            }
        }

        manager.update(window);
        window.display();
    }
}