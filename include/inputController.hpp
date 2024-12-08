#ifndef INPUTCONTROLLER_HPP
#define INPUTCONTROLLER_HPP

#include <SFML\Graphics.hpp>

struct InputController {
    sf::Vector2i getMousePosition(sf::RenderWindow&);
    bool getClickState();
};

#endif