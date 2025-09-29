#include "world.h"
#include <SFML/Graphics.hpp>

//Handles and renders all objects inside the world + the background
World::World(sf::RenderWindow& window, int world_section_id, sf::Vector2<float> init_position, const sf::Texture& texture) : 
	window{window}, background{sf::Sprite(texture)}, world_section_id{world_section_id}, position{init_position}
	{
	map_size = texture.getSize();
	
}

int World::update(){
	for (Object* object : objects){
		object->update();
	}
	for (Object*  npc : npcs){
		npc->update();
	}
}

void World::move(sf::Vector2<float>& distance){
	background.move(distance);
}

void World::render(){
	window.draw(background);
}

World::~World(){
	for (Object* object : objects){
		delete object;
	}
	for (Object*  npc : npcs){
		delete npc;
	} 
}
