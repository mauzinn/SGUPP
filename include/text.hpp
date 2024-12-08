#ifndef TEXT_HPP
#define TEXT_HPP

#include <SFML\Graphics.hpp>
#include "./button.hpp"
#include "./baseElement.hpp"

struct Text : BaseElement {
    sf::Font font;
    std::string value;

    Text(sf::Vector2f, sf::Vector2f, bool, std::string = "", std::string = "example/assets/default.ttf");
    void attachButton(Button);
    sf::Text getText();
};

#endif