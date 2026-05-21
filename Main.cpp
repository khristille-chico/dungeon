#include "SFML/Graphics.hpp"
#include <iostream>
#include "Menu.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode({1400, 800}), "SFML works!");
   
   Menu menu(window.getSize().x, window.getSize().y);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        menu.draw(window);
        window.display();
    }
} 