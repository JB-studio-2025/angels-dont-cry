#ifndef WORLD_H
#define WORLD_H

#include<string>
#include <SFML/Graphics.hpp>
#include<vector>
#include "object.h"

using namespace std;

class world
{
public:
	world(sf::RenderWindow&, sf::Texture&, int, vector<int>);
	~world();
	virtual int update(); //return adress to the currently active world section
	virtual void render();
protected:
	vector<int> position;
	sf::RenderWindow& window;
	vector<Object*> npcs;
	bool map_is_active;
	int world_section_id;
	vector<int> map_size;
	sf::sprite& background;
	vector<object*> objects; 
};

  
#endif

  
