#include "object.h"
#include<string>
#include<stdexcept>
#include <SFML/Graphics.hpp>
#include<iostream>
#include<cmath>

using namespace std;

Object::Object(sf::Vector2<float> position, int angle, const sf::Texture& texture)
  : position{position}, angle{angle}, sprite{sf::Sprite(texture)}
{
	sf::Vector2u texture_size { texture.getSize() };
	sprite.setOrigin({(texture_size.x / 2), (texture_size.y / 2)});
	sprite.setPosition(position);
}

void Object::set_position(sf::Vector2<float>){
  sprite.setPosition(position);
}

void Object::update()
{}

void Object::render(sf::RenderWindow& window)
{}

