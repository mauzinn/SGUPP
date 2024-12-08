#include <SFML\Graphics.hpp>
#include <vector>
#include "../include/manager.hpp"
#include "../include/button.hpp"
#include "../include/text.hpp"

void Manager::addButton(Button _button) {
    Manager::buttons.push_back(_button);
}

void Manager::addText(Text _text) {
    Manager::texts.push_back(_text);
}

void Manager::update(sf::RenderWindow& _window) {
    sf::Vector2i _mouse_position = Manager::input.getMousePosition(_window);
    sf::Vector2i _mouse_size(1, 1);

    for (int i = 0; i < Manager::buttons.size(); i++) {
        Button _button = Manager::buttons[i];

        if (_button.getVisible()) {
            _button.update(_mouse_position, _mouse_size, Manager::input.getClickState());
            _window.draw(_button.getButton());
        }
    }

    for (int i = 0; i < Manager::texts.size(); i++) {
        Text _text = Manager::texts[i];

        if (_text.getVisible()) {
            
            _window.draw(_text.getText());
        }
    }
}