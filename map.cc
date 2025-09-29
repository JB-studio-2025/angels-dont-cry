#include "world.h"
#include <SFML/Graphics.hpp>

void world::world(sf::Renderwindow& window, sf::Texture& texture, int world_section_id, vector<int> init_position) : window{window}, background{sprite}, world_section_id{world_section_id}, position{init_position}, sprite{sf::Sprite(texture)}{
	auto map_size = background.shape();
}

int world::update(){
	for (object* object : objects){
		object->update();
	}
	for (object*  npc : npcs){
		npc->update();
	}
}

void world::render(){
	window.draw(sprite);
}

void world::~world(){
	for (object* object : objects){
		delete object;
	}
	for (object*  npc : npcs){
		delete npc;
	} 
}
