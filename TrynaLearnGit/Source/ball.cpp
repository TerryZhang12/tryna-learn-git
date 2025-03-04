#include "ball.h"

#include <iostream>

#include "global.h"

Ball::Ball(float radius, float x, float y) : x(x),
											 y(y),
											 dx(300),
											 dy(300),
											 radius(radius)
{
	body.setRadius(radius);
	body.setPointCount(100);
	body.setFillColor(sf::Color::Red);
}

void Ball::update(sf::RenderWindow& window, float deltaTime)
{
	x += dx * deltaTime;
	y -= dy * deltaTime;

	if (x + radius * 2 > SCREEN_WIDTH || x < 0)
	{
		dx *= -1;
	}
	if (y + radius * 2 > SCREEN_HEIGHT || y < 0)
	{
		dy *= -1;
	}

	body.setPosition({ x, y });
	window.draw(body);
}