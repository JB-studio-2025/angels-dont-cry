#ifndef PLAYER_H
#define PLAYER_H
#include "object.h"
#include<string>
#include <SFML/Graphics.hpp>

class Player : public Object
{
public:
	using Object::Object;
	Player(double, double, double, double, double, const sf::Texture&);
	void update()override;
	void render(sf::RenderWindow&)override;
	double speed{};
	double Dangle{};
};



#endif
