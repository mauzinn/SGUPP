#include <SFML\Graphics.hpp>
#include <iostream>
#include "../include/text.hpp"
#include "../include/baseElement.hpp"
#include "../include/button.hpp"

Text::Text(sf::Vector2f _position, sf::Vector2f _size, bool _visible, std::string _value, std::string _font) : BaseElement(_position, _size, _visible) {
    Text::value = _value;
    if (!Text::font.loadFromFile(_font)) {
        std::cout << "Error in try of rendering the font: " << _font << '\n';
    }
}

sf::Text Text::getText() {
    sf::Text _text;
    _text.setFont(Text::font);
    _text.setString(Text::value);
    _text.setPosition(Text::getPosition());
    _text.setScale(Text::getSize());
    _text.setFillColor(sf::Color::Black);

    return _text;
}

void Text::attachButton(Button _button) {
    Text::setPosition(_button.getPosition());
}