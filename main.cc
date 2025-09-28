#include "gamestate.h"
#include <SFML/Graphics.hpp>

class game
{
	private:
	sf::RenderWindow window{sf::VideoMode({800,800}),"Game"};
	game_state* passive_state{new in_game(window)};
	game_state* active_state{new start_menu(window)};
	
	public:
	
		game()
		{
		
			while(check_for_quitters())
			{
				//updates and changes state
				update_state();
				active_state->render();
			}
			delete passive_state;
			delete active_state;
		}
	
		bool check_for_quitters()
		{
			while (const std::optional event = window.pollEvent())
			{
				if (event->is<sf::Event::Closed>())
				{
					window.close();
					return false;
				}
				else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
				{
					if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
					{
						window.close();
						return false;
					}
				}
			}
			return true;
		}
	
		void update_state()
		{
			if(!active_state->update())
			{
				swap(active_state, passive_state);
			}
		}
};

int main()
{
	game game {};
}