#ifndef GAME_STATE_H
#define GAME_STATE_H

#include "object.h"
#include "player.h"
#include "world.h"
#include "motion.h"
#include<string>
#include <SFML/Graphics.hpp>
#include<vector>


using namespace std;

class game_state
{
 public:
  game_state(sf::RenderWindow& window);
  virtual std::string get_state();
  virtual void handle(sf::Event event);
  virtual bool update();
  virtual void render();
  sf::Texture load_texture(string);
  sf::RenderWindow& window;
protected:
  Motion* motion;
  //Player* player;
  //vector<Object*> objects;
  bool game_is_running;
  vector<sf::Texture> textures;
};

class in_game : public game_state
{
 public:
  in_game(sf::RenderWindow& window);
  string get_state() override;
  void handle(sf::Event event) override;
  bool update() override;
  void render() override;
};

class start_menu : public game_state
{
public:
  start_menu(sf::RenderWindow& window);
  bool update() override;
  void render() override;
};
  
#endif

  
