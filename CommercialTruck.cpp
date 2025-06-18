#include "CommercialTruck.h"

/*
This is the typeOfCommercial function.

This will determine which sprite is printed to the screen, based on the value provided in the Source.cpp as well as setting a capacityToCarry value which is printed via the getCarryWeight function.

Additionally, this will take in the value from ptr_trailer to determine if a truck should be drawn with a trailer or not and change the carry capacity to larger value with a trailer or a value of zero, without a trailer.
*/

int CommercialTruck::typeOfCommercial(int i_commercialNum)
{

	

	if (i_commercialNum == 1)
	{

		
		this->setType("hotdog truck");
		this->getSprite("../Vehicles/hotdog.png");
		f_capacityToCarry = 450.f;


	}
	else if (i_commercialNum == 2)
	{

		

		if (*ptr_trailer == true)
		{

			this->setType("truck");
			this->getSprite("../Vehicles/truck.png");
			f_capacityToCarry = 2000.f;

		}
		else
		{

			this->setType("vintage truck");
			this->getSprite("../Vehicles/truckcabin_vintage.png");
			f_capacityToCarry = 0.f;

		}

	}

	return i_commercialNum;


}

/*
This is the calculatePassengersToCarry function. This will set the value of ptr_passengers to be equal to the value at ptr_weight, divided by the default value of f_humanWeight and divide this value (after the brackets calculation) by the number of passengers.
It then returns the value at ptr_passengers to be used in the function in the Truck class to call how many passengers can fit in the vehicle.
*/

int CommercialTruck::calculatePassengersToCarry(int passenger)
{

	*ptr_passengers = (*ptr_weight / f_humanWeight) / passenger;


	return *ptr_passengers;

}

/*
This is the getWeight function, which will return the weight of the vehicle and print out a message to the console to advise the vehicle's weight and what type of vehicle it is.
*/

float CommercialTruck::getWeight()
{

	cout << "This " << *ptr_type << " has a weight of: " << *ptr_weight << "kg. " << endl;

	return *ptr_weight;

}

/*
This is the getName function, which will print out the name of the vehicle and the type of vehicle it is to the console.
*/

void CommercialTruck::getName()
{


	cout << "The name of this big ol' corporate " << *ptr_type << " is: " << s_name << endl;

}

/*
This is the getColour function, which will return the value of the colour which was input by the user and return it, as well as print out this and the type to the console.
*/

string CommercialTruck::getColour()
{

	cout << "This " << *ptr_type << "'s colour is: " << *ptr_colour << endl;

	return *ptr_colour;
}

/*
This is the getSeats function, which will return the value of the seats input in the constructor for this class. It will also print a message to the console to advise how many seats it has.
*/

int CommercialTruck::getSeats()
{

	cout << "This " << *ptr_type << " has: " << *ptr_seats << " seats." << endl;

	return *ptr_seats;
}

/*
This is the getWheels function. This will return the value for the wheels input in the constructor and print the value to the console.
*/

int CommercialTruck::getWheels()
{

	cout << "The number of wheels on " << s_name << " is: " << *ptr_wheels << endl;

	return *ptr_wheels;
}

/*
This is the accelerationCalculation function.This will take in 4 values to work out the acceleration of the vehicle.
The values are taken from a standing position to a value provided at a particular velocity(same with time) to return anaverage acceleration for the vehicle.
This value is then assigned to ptr_accelerationand the acceleration is printed to the console.
*/

float CommercialTruck::accelerationCalculation(float f_vZero, float f_vOne, float f_tZero, float f_tOne) const
{

	*ptr_acceleration = (f_vOne - f_vZero) / (f_tOne - f_tZero);

	cout << s_name << "'s acceleration is: " << *ptr_acceleration << "mph. " << endl;

	return *ptr_acceleration;

}

/*
This is the getCarryWeight function, which prints a message to the console to advise how much weight the vehicle can carry before it is over it's limit in kilograms.
*/

void CommercialTruck::getCarryWeight()
{

	cout << "After taking in the number of passengers, the total remaining carry weight is: " << f_capacityToCarry << " kilograms before it is over it's limit. " << endl;

}

/*
This is the Builder function, which calls the functions above which do not need the user to input data.
Using the "this" keyword, means it will only print out the values which are associated with that particular object in the main Source.cpp file.
*/

void CommercialTruck::Builder()
{

	this->getName();
	this->getColour();
	this->getWheels();
	this->getWeight();
	this->getTrailer();
	this->getSeats();
	this->getPosition();
	this->getPassenger();
	this->getCarryWeight();

	

}



