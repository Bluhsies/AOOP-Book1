#include "Bike.h"

/*
This is the typeOfBike function.
This will determine what type of vehicle is being requested by the user and select the appropriate sprite.
I have set it out in this way to make it represent a vehicle manufacturer taking in certain parameters to determine what aethetically the customer would want for their vehicle.
*/

int Bike::typeOfBike(int i_bikeNum)
{

	if (i_bikeNum == 1)
	{

		this->setType("scooter");
		this->getSprite("../Vehicles/scooter.png");
		

	}
	else if (i_bikeNum == 2)
	{

		this->setType("motorbike");
		this->getSprite("../Vehicles/cycle.png");
		
	}

	return i_bikeNum;

}

/*
This is the getWeight function, which will return the weight of the vehicle and print out a message to the console to advise the vehicle's weight and what type of vehicle it is.
*/

float Bike::getWeight()
{

	cout << "This " << *ptr_type << " has a weight of: " << *ptr_weight << "kg. " << endl;

	return *ptr_weight;

}

/*
This is the getName function, which will print out the name of the vehicle and the type of vehicle it is to the console.
*/

void Bike::getName()
{


	cout << "The name of this great little " << *ptr_type << " is: " << s_name << endl;

}

/*
This is the getColour function, which will return the value of the colour which was input by the user and return it, as well as print out this and the type to the console.
*/

string Bike::getColour()
{

	cout << "This " << *ptr_type << "'s colour is: " << *ptr_colour << endl;

	return *ptr_colour;
}

/*
This is the getSeats function, which will return the value of the seats input in the constructor for this class. It will also print a message to the console to advise how many seats it has.
*/

int Bike::getSeats()
{

	cout << "This " << *ptr_type << " has: " << *ptr_seats << " seats." << endl;

	return *ptr_seats;
}

/*
This is the getWheels function. This will return the value for the wheels input in the constructor and print the value to the console.
*/

int Bike::getWheels()
{

	cout << "The number of wheels on " << s_name << " is: " << *ptr_wheels << endl;

	return *ptr_wheels;
}

/*
This is the accelerationCalculation function. This will take in 4 values to work out the acceleration of the vehicle.
The values are taken from a standing position to a value provided at a particular velocity (same with time) to return anaverage acceleration for the vehicle.
This value is then assigned to ptr_acceleration and the acceleration is printed to the console.
*/

float Bike::accelerationCalculation(float f_vZero, float f_vOne, float f_tZero, float f_tOne) const
{

	*ptr_acceleration = (f_vOne - f_vZero) / (f_tOne - f_tZero);

	cout << s_name << "'s acceleration is: " << *ptr_acceleration << "mph. " << endl;

	return *ptr_acceleration;

}

/*
This is the Builder function, which calls the functions above which do not need the user to input data.
Using the "this" keyword, means it will only print out the values which are associated with that particular object in the main Source.cpp file.
*/

void Bike::Builder()
{

	this->getName();
	this->getColour();
	this->getWheels();
	this->getWeight();
	this->getSeats();
	this->getPosition();

}

