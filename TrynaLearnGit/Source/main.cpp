#include <iostream>
#include <SFML/Graphics.hpp>

#include "global.h"
#include "ball.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode({ SCREEN_WIDTH, SCREEN_HEIGHT }), "SFML works!");
    window.setFramerateLimit(FPS_LIMIT);
    sf::Clock clock;

    Ball ball(50, 100, 100);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        //Game logic
        float deltaTime = clock.restart().asSeconds();
        std::cout << deltaTime << std::endl;
        //Draw/update logic
        window.clear();
        ball.update(window, deltaTime);
        window.display();
    }
}