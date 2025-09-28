#include "object.h"
#include<string>
#include<stdexcept>
#include <SFML/Graphics.hpp>
#include<iostream>
#include<cmath>

using namespace std;

Object::Object(double p_x, double p_y, double angle, const sf::Texture& texture)
  : pos_x{p_x}, pos_y{p_y}, angle{angle}, sprite{sf::Sprite(texture)}
{
	sf::Vector2u texture_size { texture.getSize() };
	sprite.setOrigin({(texture_size.x / 2), (texture_size.y / 2)});
	sprite.setPosition({pos_x, pos_y});
}

void Object::set_position(sf::Vector2<int>){
  sprite.setPosition({pos_x, pos_y});
}

void Object::update()
{}

void Object::render(sf::RenderWindow& window)
{}

