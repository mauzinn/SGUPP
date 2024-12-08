#ifndef MANAGER_HPP
#define MANAGER_HPP

#include <SFML\Graphics.hpp>
#include <vector>
#include "./button.hpp"
#include "./inputController.hpp"
#include "./text.hpp"

class Manager {
    private:
    InputController input;
    std::vector<Button> buttons;
    std::vector<Text> texts;

    public:
    void addButton(Button);
    void addText(Text);
    void update(sf::RenderWindow& _window);
};

#endif