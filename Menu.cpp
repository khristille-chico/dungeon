#include "Menu.h"

Menu::Menu(float width, float height) {

    if(!font.openFromFile("DUNGRG__.ttf")) {
        // handle error
    }

    menu[0] = new sf::Text(font);
    menu[1] = new sf::Text(font);
    menu[2] = new sf::Text(font);

    menu[0]->setFont(font);
    menu[0]->setFillColor(sf::Color::Red);
    menu[0]->setString("Play");
    menu[0]->setCharacterSize(80);
    sf::FloatRect startBounds = menu[0]->getLocalBounds();
    menu[0]->setOrigin({startBounds.size.x / 2.f, startBounds.size.y / 2.f});      // set to center position
    menu[0]->setPosition({width / 2, height / (MAX_MENU_BUTTONS + 1) * 1});

    menu[1]->setFont(font);
    menu[1]->setFillColor(sf::Color::White);
    menu[1]->setString("Options");
    menu[1]->setCharacterSize(80);
    sf::FloatRect optionsBounds = menu[1]->getLocalBounds();
    menu[1]->setOrigin({optionsBounds.size.x / 2.f, optionsBounds.size.y / 2.f});
    menu[1]->setPosition({width / 2, height / (MAX_MENU_BUTTONS + 1) * 2});

    menu[2]->setFont(font);
    menu[2]->setFillColor(sf::Color::Red);
    menu[2]->setString("Quit");
    menu[2]->setCharacterSize(80);
    sf::FloatRect quitBounds = menu[2]->getLocalBounds();
    menu[2]->setOrigin({quitBounds.size.x / 2.f, quitBounds.size.y / 2.f});
    menu[2]->setPosition({width / 2, height / (MAX_MENU_BUTTONS + 1) * 3});

}

Menu::~Menu() {
}

void Menu::draw(sf::RenderWindow &window) {
    for(int i = 0; i < MAX_MENU_BUTTONS; i++){
        if (menu[i] != nullptr) {
            window.draw(*menu[i]);
        }
    }
}
 

