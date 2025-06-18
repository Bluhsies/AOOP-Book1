#include "GameObject.h"


/*
This is the setPosition function. This will take in the values for the origin of the sprite, location and scale.
It will return these values, which are used in the getPosition function below to set where the sprites are in the SFML window.
*/

sf::Vector2f GameObject::setPosition(sf::Vector2f v2f_originIn, sf::Vector2f v2f_locationIn, sf::Vector2f v2f_scaleIn)
{
	this->v2f_origin = v2f_originIn;
	this->v2f_position = v2f_locationIn;
	this->v2f_scale = v2f_scaleIn;

	

	return v2f_scale;
	return v2f_origin;
	return v2f_position;
}

/*
This is the getSprite function. This will use s_getImage to set the location of the sprite which should be used for that particular vehicle, when it is drawn to the window.
It will check to see if the file name location is available and provide an error message if there is no file with that name.

It will then set the texture of s_sprite and return this value.
*/

sf::Sprite GameObject::getSprite(string s_getImage)
{

	s_imageLocation = s_getImage;

	if (!t_tex.loadFromFile(s_imageLocation))
	{
		std::cout << "No Files." << std::endl;
	}
	else if (t_tex.loadFromFile(s_imageLocation)) {
		t_tex.loadFromFile(s_imageLocation);
	}
	s_sprite.setTexture(t_tex);
	return s_sprite;

}

/*
This is the getPosition function. This will set the position, origin and scale of the sprite based on the parameters supplied in setPosition.
*/

void GameObject::getPosition()
{

	s_sprite.setOrigin(v2f_origin);
	s_sprite.setPosition(v2f_position);
	s_sprite.setScale(v2f_scale);

}

/*
This is the setName function.

This will set the name of the vehicle.

Currently these are comedic names for the vehicles, but they can be changed to more servious ones, depending on what the user inputs in the main Source.cpp.
*/

string GameObject::setName(string name)
{

	s_name = name;

	return s_name;

}

/*
This is the Spacer function. This is just used to create a gap between each group of vehicle information in the console window.
*/

void GameObject::Spacer()
{

	cout << "************************************************************" << endl;

}

