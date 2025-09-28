#ifndef OBJECT
#define OBJECT
#include <SFML/Graphics.hpp>
#include<string>

class Object
{
 public:
  Object(double, double, double, const sf::Texture&);
  
  virtual void set_position(sf::Vector2<int>);
  virtual void update();
  virtual void render(sf::RenderWindow&);
  
  double pos_x{};
  double pos_y{};
  double angle{};
  sf::Sprite sprite;
};

#endif
