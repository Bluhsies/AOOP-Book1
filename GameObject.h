#pragma once

#include<iostream>
#include<string>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

using namespace std;

/*
This is the GameObject class from which the Vehicle class is derived.
This contains information pertaining to the name of the particular vehicle, as well as information regarding the location of the sprites and where the sprites should be drawn in the SFML window.
These variables can be located under protected.

Within the public section, we have the default constructor, a function to set the position of the sprites, another to get the position, a function to get the sprites which are selected depending on what is input as a paramater, the ability to set the name of the vehicle
and a spacer which is used to separate the outputs from each other.

Additionally, we set the virtual function drawStuff, which is used in derived classes to draw the sprites to the SFML window.

We also initialise a virtual destructor, which is used in derived classes.
*/

class GameObject
{

protected:

	string s_imageLocation;
	sf::Vector2f v2f_position;
	sf::Vector2f v2f_origin;
	sf::Vector2f v2f_scale;
	string s_name;
	sf::Sprite s_sprite;
	sf::Texture t_tex;

public:
	
	
	GameObject() {};
	struct VirtualDestructor { virtual ~VirtualDestructor() = default; };
	struct VirtualDerived : VirtualDestructor{};
	sf::Vector2f setPosition(sf::Vector2f v2f_originIn, sf::Vector2f v2f_locationIn, sf::Vector2f v2f_scaleIn);
	void getPosition();
	sf::Sprite getSprite(string s_getImage);
	string setName(string name);
	void Spacer();


	virtual void drawStuff(sf::RenderTarget& target) {};

	

};