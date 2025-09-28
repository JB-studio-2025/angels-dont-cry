#include "map.h"
#include <SFML/Graphics.hpp>

void map::map(sf::Renderwindow& window, sf::Texture& texture, int world_section_id, vector<int> init_position) : window{window}, background{sprite}, world_section_id{world_section_id}, position{init_position}, sprite{sf::Sprite(texture)}{
	auto map_size = background.shape();
}

int map::update(){
	for (object* object : objects){
		object->update();
	}
	for (object*  npc : npcs){
		npc->update();
	}
}

void map::render(){
	window.draw(sprite);
}

void map::~map(){
	for (object* object : objects){
		delete object;
	}
	for (object*  npc : npcs){
		delete npc;
	} 
}
