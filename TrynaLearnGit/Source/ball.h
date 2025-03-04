#pragma once

#include <SFML/Graphics.hpp>

class Ball
{
	sf::CircleShape body;
	float x, y, dx, dy, radius;
public:
	Ball(float radius, float x, float y);

	void update(sf::RenderWindow& window, float deltaTime);
};