#include <iostream>
#include <SFML/Graphics.hpp>

#include "global.h"

int main()
{
    const unsigned int SCREENWIDTH = 500;
    const unsigned int SCREENHEIGHT = 500;

    sf::RenderWindow window(sf::VideoMode({ SCREENWIDTH, SCREENHEIGHT }), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}