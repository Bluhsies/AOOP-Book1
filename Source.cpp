#include<iostream>
#include<string>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include "Car.h"
#include "Bike.h"
#include "CommercialTruck.h"
#include "UtilityTruck.h"

sf::Color colour = sf::Color::Green;
sf::Vector2f v2fMove(0.0f, 0.0f);

/*
This is the main function for Coursework_1.
This is where the user can set vertain variables for their vehicles, as well as draw the images to the SFML window.
*/

int main()
{

	sf::RenderWindow window(sf::VideoMode(1540, 900, 32), "Coursework 1"); //Draw an SFML window.
	sf::Texture ambulanceTexture;
	sf::Sprite ambulanceSprite;
	
	

	const float f_FPS = 60.0f; //The desired FPS. (The number of updates each second).
	bool b_redraw = true;      //Do I redraw everything on the screen?

	window.setFramerateLimit(f_FPS);
	sf::Clock clock;

	// The below two vehicle objects have been created to show upcasting of the drawStuff functions for two of the vehicles, associated with the bike and car classes.
	
	Vehicle* upcastOne;
	Vehicle* upcastTwo;

	Bike motorbike(2, "Red", 120.05, 1);
	motorbike.setName("Scooty McScootScoot");
	motorbike.typeOfBike(1);
	motorbike.setPosition(sf::Vector2f(0.f, 0.f), sf::Vector2f(800.f, 800.f), sf::Vector2f(5.f, 5.f));
	motorbike.Builder();
	motorbike.accelerationCalculation(18.5f, 46.1f, 0.f, 2.47f);
	motorbike.Spacer();

	Car convertible(4, "Blue", 450.5, 5);
	convertible.typeOfCar(1);
	convertible.setPosition(sf::Vector2f(10.f, 10.f), sf::Vector2f(900.f, 600.f), sf::Vector2f(5.f, 5.f));
	convertible.setName("Nightrider");
	convertible.Builder();
	convertible.accelerationCalculation(0.f, 120.f, 0.f, 7.f);
	convertible.Spacer();
	
	CommercialTruck lorry(4, "Red", 1000, 4);
	lorry.setPosition(sf::Vector2f(0.f, 0.f), sf::Vector2f(300.f, 550.f), sf::Vector2f(5.f, 5.f));
	lorry.setName("He Who Honks in the Night");
	lorry.setTrailer(false);
	lorry.typeOfCommercial(2);
	lorry.calculatePassengersToCarry(3);
	lorry.Builder();
	lorry.accelerationCalculation(0.f, 100.f, 0.f, 10.f);
	lorry.Spacer();
	
	// This is an attempt at downcasting, to draw the hotdog truck and associated parameters to the SFML window and console.
	// I found that if I did not downcast the other associated functions as well, it would not print them to the console.
	CommercialTruck hotdog(4, "Red", 400, 2);
	GameObject& downcastHotdog = hotdog;
	CommercialTruck* evilDog = dynamic_cast<CommercialTruck*>(&downcastHotdog);
	evilDog->setPosition(sf::Vector2f(0.f, 0.f), sf::Vector2f(300.f, 700.f), sf::Vector2f(5.f, 5.f));
	evilDog->setName("The Weenie Mobile");
	evilDog->setTrailer(false);
	evilDog->typeOfCommercial(1);
	evilDog->calculatePassengersToCarry(2);
	evilDog->Builder();
	evilDog->accelerationCalculation(0.f, 60.f, 0.f, 10.f);
	evilDog->Spacer();

	UtilityTruck bus(4, "Green", 3500, 30);
	bus.setTrailer(false);
	bus.typeOfUtility(1);
	bus.setPosition(sf::Vector2f(0.f, 0.f), sf::Vector2f(500.f, 300.f), sf::Vector2f(5.f, 5.f));
	bus.setName("Gary Bussy");
	bus.calculatePassengersToCarry(20);
	bus.Builder();
	bus.accelerationCalculation(0.f, 70.f, 0.f, 4.f);
	bus.Spacer();
	
	// Here is where the upcasted objects are made to be equal to references of the motorbike and convertible objects.

	upcastOne = &motorbike;
	upcastTwo = &convertible;

	while (window.isOpen())
	{
		//Wait until 1/60th of a second has passed, then update everything.
		if (clock.getElapsedTime().asSeconds() >= 1.0f / f_FPS)
		{
			b_redraw = true; //We're ready to redraw everything
			clock.restart();

		}
		//Check if the window is open or closed.
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}

		}

		//Draw to the window
		if (b_redraw)
		{
			b_redraw = false;
			window.clear(sf::Color::White);

			//Draw the sprite
			//The first two function calls for drawStuff are to show the upcasting of the car and bike classes' drawStuff functions.
			upcastTwo->drawStuff(window);
			upcastOne->drawStuff(window);
			lorry.drawStuff(window);
			//The below function call is to represent the downcasting of an example of the CommercialVehicle class.
			evilDog->drawStuff(window);
			bus.drawStuff(window);
			window.display();
		}
	}
};
