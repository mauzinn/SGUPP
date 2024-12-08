#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <SFML\Graphics.hpp>
#include <functional>
#include "./baseElement.hpp"

class Button : public BaseElement {
    private:
    std::function<void()> onClick;
    sf::Color color, hover_color;
    bool is_hover;

    bool isUnder(sf::Vector2i, sf::Vector2i);
    public:
    void setHoverColor(sf::Color);
    void setColor(sf::Color);

    Button(sf::Vector2f, sf::Vector2f, bool, std::function<void()>);

    void update(sf::Vector2i, sf::Vector2i, bool);
    sf::RectangleShape getButton();
};

#endif