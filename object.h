#ifndef OBJECT
#define OBJECT
#include <SFML/Graphics.hpp>
#include<string>
#include<vector>

using namespace std;

class Object
{
 public:
  Object(sf::Vector2<float>, int, const sf::Texture&);
  virtual void set_position(sf::Vector2<float>);
  virtual void update();
  virtual void render(sf::RenderWindow&);
  
  sf::Vector2<float> position; //Position i världen, inte sprites position på skärmen!
  int angle{};
  sf::Sprite sprite;
};

#endif
