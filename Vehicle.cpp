#include "Vehicle.h"

/*
This is the setType function. This will set the type of vehicle and print our a message to the console to advise what type the vehicle is.
*/

void Vehicle::setType(string type)
{

	
	s_type = type;
	
	cout << "This type of vehicle is a " << s_type << "." << endl;
	
	
}

/*
This is the drawStuff function, which is used to draw the vehicles to the SFML window.
I have set this function here as each derived class utilises this function to draw something to the SFML window.
*/

void Vehicle::drawStuff(sf::RenderTarget& target)
{

	target.draw(s_sprite);


}
