#include "gamestate.h"
#include<string>
#include <SFML/Graphics.hpp>
#include<fstream>
#include<sstream>
#include<iostream>

using namespace std;

game_state::game_state(sf::RenderWindow& window) : window{window}
{}
string game_state::get_state()
{}
void game_state::handle(sf::Event event)
{}
bool game_state::update()
{}
void game_state::render()
{}
sf::Texture game_state::load_texture(string filename){
	sf::Texture texture;
	if (!texture.loadFromFile(filename))
	{
		throw std::runtime_error { "Kan inte öppna: " + filename};
	}
	return texture;
}

in_game::in_game(sf::RenderWindow& window) : game_state(window)
{
  game_is_running = true;
  
  //Ladda in bilder
	//sf::Texture texture;
	//if (!texture.loadFromFile("fighter.png"))
	//{
	//	throw std::runtime_error { "Kan inte öppna: fighter.png" };
	//}
	textures.push_back(load_texture("fighter.png"));
  
  //Skapa en spelare:
	Object* player1 = new Player(100, 100, 0, 1, 1, textures.back());
	objects.push_back(player1);
}
string in_game::get_state()
{}

void in_game::handle(sf::Event event)
{}

bool in_game::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
      objects[0]->update();
    }
  
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
      objects[0]->update();
    }

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
      objects[0]->update();
    }

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
      objects[0]->update();
    }
	return true;
}


void in_game::render()
{
  window.clear();
  for(Object* object : objects)
    {
      object->render(window);
    }
  window.display();
}

start_menu::start_menu(sf::RenderWindow& window) : game_state(window)
{
	
}

bool start_menu::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
		return false;
    }
	return true;
}

void start_menu::render()
{
	sf::RectangleShape rectangle({120.f, 50.f});
	rectangle.setPosition({300.f, 350.f});
	rectangle.setFillColor(sf::Color(100, 250, 50));
	window.draw(rectangle);
}