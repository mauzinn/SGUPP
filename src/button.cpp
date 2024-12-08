#include <SFML\Graphics.hpp>
#include <functional>
#include "../include/baseElement.hpp"
#include "../include/button.hpp"

Button::Button(sf::Vector2f _position, sf::Vector2f _size, bool _visible, std::function<void()> _callback) : BaseElement(_position, _size, _visible) {
    Button::onClick = _callback;
    Button::is_hover = false;
}

void Button::setColor(sf::Color _color) {
    Button::color = _color;
}

void Button::setHoverColor(sf::Color _color) {
    Button::hover_color = _color;
}

bool Button::isUnder(sf::Vector2i _position, sf::Vector2i _size) {
    sf::Vector2f _position_button, _size_button;
    _position_button = Button::getPosition();
    _size_button = Button::getSize();

    return (
        float(_position.x) < (_position_button.x + _size_button.x) && float(_position.x + _size.x) > _position_button.x &&
        float(_position.y) < (_position_button.y + _size_button.y) && float(_position.y + _size.y) > _position_button.y
    );
}

sf::RectangleShape Button::getButton() {
    sf::RectangleShape _button_shape(Button::getSize());
    _button_shape.setPosition(Button::getPosition());
    _button_shape.setFillColor((Button::is_hover ? Button::hover_color : Button::color));

    return _button_shape;
}

void Button::update(sf::Vector2i _position, sf::Vector2i _size, bool _click) {
    Button::is_hover = Button::isUnder(_position, _size);

    if (Button::is_hover && _click) {
        Button::onClick();
    }
}