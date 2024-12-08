#ifndef BASEELEMENT_HPP
#define BASEELEMENT_HPP

#include <SFML\Graphics.hpp>

class BaseElement {
    private:
    sf::Vector2f position, size;
    bool visible;

    public:
    void setPosition(sf::Vector2f);
    void setSize(sf::Vector2f);
    void setVisible(bool);

    BaseElement(sf::Vector2f, sf::Vector2f, bool);

    sf::Vector2f getPosition();
    sf::Vector2f getSize();
    bool getVisible();
};

#endif