#include <iostream>
#include <SFML\Graphics.hpp>

class TitleScreen
{
public:
	TitleScreen(int height, int width);//loads a menu image
	~TitleScreen();

	void draw(sf::RenderWindow &screen);
	void moveUpward();
	void moveDownward();
	int getPressed();

	/*
	need functions for moving up and down 
	moveup
	movedown

	*/

private:
	
};

