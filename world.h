#ifndef WORLD_H
#define WORLD_H

#include<string>
#include <SFML/Graphics.hpp>
#include<vector>
#include "object.h"

using namespace std;

class World
{
public:
	World(sf::RenderWindow&, int, sf::Vector2<float>, const sf::Texture&);//, sf::Texture&, int, vector<int>);
	~World();
	int update();
	void render();
	void move(sf::Vector2<float>&);
	sf::Sprite background;
	
protected:
	sf::Vector2<float> position;
	sf::RenderWindow& window;
	bool map_is_active;
	int world_section_id;
	sf::Vector2u map_size;
	
	vector<Object*> npcs;
	vector<Object*> objects; 
	vector<Object*> walls;
};

  
#endif

  
