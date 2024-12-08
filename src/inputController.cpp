#include <SFML\Graphics.hpp>
#include "../include/inputController.hpp"

sf::Vector2i InputController::getMousePosition(sf::RenderWindow& _window) {
    return sf::Mouse::getPosition(_window);
}

bool InputController::getClickState() {
    return sf::Mouse::isButtonPressed(sf::Mouse::Left);
}