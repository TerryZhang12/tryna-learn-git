#pragma once

#include <SFML/Graphics.hpp>

class Sprite
{
	virtual void draw(sf::RenderWindow& window, sf::Vector2f camera);
	virtual void update(sf::RenderWindow& window);

};