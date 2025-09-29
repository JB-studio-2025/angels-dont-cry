#ifndef MOTION_H
#define MOTION_H

#include "player.h"
#include "world.h"
#include<SFML/Graphics.hpp>
#include<vector>
#include<iostream>

using namespace std;

class Motion
{
public:
	//we got the motion of the ocean
	Motion(sf::RenderWindow&, int);
	int update();
	void render();
	unique_ptr<World> world;
	Player* player;
	sf::Texture player_texture;
	sf::Texture current_background;
	
protected:
	sf::Vector2<float> current_position; //position on the background
	int world_section_id;
	sf::Vector2u window_size;
	sf::RenderWindow& window;
	
};

#endif