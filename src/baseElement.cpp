#include <SFML\Graphics.hpp>
#include "../include/baseElement.hpp"

BaseElement::BaseElement(sf::Vector2f _position, sf::Vector2f _size, bool _visible) {
    BaseElement::setPosition(_position);
    BaseElement::setSize(_size);
    BaseElement::setVisible(_visible);
}

void BaseElement::setPosition(sf::Vector2f _position) {
    BaseElement::position = _position;
}

void BaseElement::setSize(sf::Vector2f _size) {
    BaseElement::size = _size;
}

void BaseElement::setVisible(bool _visible) {
    BaseElement::visible = _visible;
}

sf::Vector2f BaseElement::getPosition() {
    return BaseElement::position;
}

sf::Vector2f BaseElement::getSize() {
    return BaseElement::size;
}

bool BaseElement::getVisible() {
    return BaseElement::visible;
}