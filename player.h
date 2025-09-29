#ifndef PLAYER_H
#define PLAYER_H
#include "object.h"
#include<string>
#include <SFML/Graphics.hpp>

using namespace std;

class Player : public Object
{
public:
	using Object::Object;
	Player(sf::Vector2<float>,int, const sf::Texture&);
	void update()override;
	void render(sf::RenderWindow&)override;
	int speed{};
	int Dangle{};
};



#endif
