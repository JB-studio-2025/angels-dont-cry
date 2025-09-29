#include "object.h"
#include "player.h"
#include<cmath>

using namespace std;

Player::Player(sf::Vector2<float> position, int speed, const sf::Texture& texture)
  : Object(position, angle, texture), speed{speed}
{        

}


void Player::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		// left key is pressed: move our character
		position.x += speed;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		// left key is pressed: move our character
		position.x -= speed;
	}
  


	//sprite.setPosition(position);

}

void Player::render(sf::RenderWindow& window)
{
  window.draw(sprite);
}
