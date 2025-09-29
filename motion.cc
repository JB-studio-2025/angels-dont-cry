#include "motion.h"

using namespace std;

Motion::Motion(sf::RenderWindow& window, int world_section_id) : window{window}, world_section_id{world_section_id}{
	
	window_size = window.getSize();
	if(!player_texture.loadFromFile("fighter.png")){
		cout << "no file loaded";
	}
	if(!current_background.loadFromFile("resources/textures/mario_background.jpg")){
		cout << "no file loaded";
	}
	//Skapa spelaren:
	player = new Player({window_size.x/2, window_size.y *9/10}, 2, player_texture);
	world = make_unique<World>(window, world_section_id, sf::Vector2<float>{200,0}, current_background);
}


int Motion::update(){
	player->update();
	//cout << "updating";
	sf::Vector2<float> distance{-(player->position.x - (current_position.x + window_size.x/2)) / 30, 0};
	world->move(distance);
	current_position.x += (player->position.x - (current_position.x + window_size.x/2)) / 30;
	return 1;
}


void Motion::render(){
	world->render();
	//cout << "rendering";
	player->sprite.setPosition({player->position.x - current_position.x, 600});
	sf::Vector2f temp_pos = player->sprite.getPosition();
	cout << temp_pos.x << " and " << temp_pos.y << endl;
	player->render(window);
	
}