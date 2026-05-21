#pragma once 
#include <SFML/Graphics.hpp>
#include <iostream>

#define MAX_MENU_BUTTONS 3

class Menu {
public:

    Menu(float width, float height);
    ~Menu();

    void draw(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();

private:
    int selectedItemIndex;
    sf::Font font;
    sf::Text *menu[MAX_MENU_BUTTONS];
};  