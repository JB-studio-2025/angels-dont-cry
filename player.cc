#include "object.h"
#include "player.h"
#include<cmath>

using namespace std;

Player::Player(double p_x, double p_y, double angle, double speed, double dangle, const sf::Texture& texture)
  : Object(p_x, p_y, angle, texture), speed{speed}, Dangle{dangle}
{        

}


void Player::update()
{
  string movement = "forward";
  if (movement == "forward" )
    {
      pos_x += speed;
    }
  
  if (movement == "left" )
    {
      sprite.rotate(sf::degrees(Dangle));
    }

  if (movement == "backwards" )
    {
      pos_x -= speed;
    }

  if (movement == "right" )
    {
      sprite.rotate(sf::degrees(-Dangle));
    } 
  sprite.setPosition({pos_x, pos_y});
  if(pos_x > 500)
  {
	  pos_x = -100;
  }
  
}

void Player::render(sf::RenderWindow& window)
{
  window.draw(sprite);
}
