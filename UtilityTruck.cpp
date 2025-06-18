#include "UtilityTruck.h"

/*
This is the typeOfUtility function, which will determine which sprite is drawn to the screen and set it's type, based on the value input by the user in the Source.cpp file.

Additionally, it will set either the utility type or utility type and emergency type, depending on whether the setType is a part of the emergency services or not.
It will also call the getUtilityStatus, Type and EmergencyType functions at this time, so that it does not print the EmergencyType function in the Builder function, which could print a pointless function if it is a regular bus for example.
*/

int UtilityTruck::typeOfUtility(int i_utilityNum)
{

	this->utilityStatus(true);

	if (i_utilityNum == 1)
	{

		this->setType("bus");
		this->getSprite("../Vehicles/bus.png");
		

		if (*ptr_type == "bus")
		{
			s_utilityType = "School";
			this->getUtilityStatus();
			this->getUtilityType();
			
		}

	}
	else if (i_utilityNum == 2)
	{

		this->setType("firetuck");
		this->getSprite("../Vehicles/firetruck.png");

		if (*ptr_type == "firetruck");
		{
			s_utilityType = "Emergency";
			s_emergency = "Fire";
			this->getUtilityStatus();
			this->getUtilityType();
			this->getEmergencyType();
			
		}
	}

	return i_utilityNum;


}

/*
This is the calculatePassengersToCarry function.This will set the value of ptr_passengers to be equal to the value at ptr_weight, divided by the default value of f_humanWeightand. This is a different calculation to that in CommercialTruck, as the there are no additional "loads" for the utility vehicles, such as the addition of a trailer.
It then returns the value at ptr_passengers to be used in the function in the Truck class to call how many passengers can fit in the vehicle.
*/

int UtilityTruck::calculatePassengersToCarry(int passenger)
{

	*ptr_passengers = (*ptr_weight / f_humanWeight);



	return *ptr_passengers;

}

/*
This is the getUtilityType function which uses the value associated with s_utilityType for that object and prints a message to the screen to advise which service it belongs too.
*/

void UtilityTruck::getUtilityType()
{

	cout << "This utility truck is associated with the: " << s_utilityType << " services." << endl;

}

/*
This is the getEmergencyType function, which takes the value for s_emergency and prints a message to the screen to advise which member of the emergency services it belongs too.
*/

void UtilityTruck::getEmergencyType()
{

	cout << "This " << *ptr_type << " is a member of the " << s_emergency << " service. " << endl;

}

/*
This is the getWeight function, which will return the weight of the vehicle and print out a message to the console to advise the vehicle's weight and what type of vehicle it is.
*/

float UtilityTruck::getWeight()
{

	cout << "This " << *ptr_type << " has a weight of: " << *ptr_weight << "kg. " << endl;

	return *ptr_weight;

}

/*
This is the getName function, which will print out the name of the vehicle and the type of vehicle it is to the console.
*/

void UtilityTruck::getName()
{


	cout << "The name of this excellent " << *ptr_type << " is: " << s_name << endl;

}

/*
This is the getColour function, which will return the value of the colour which was input by the user and return it, as well as print out this and the type to the console.
*/

string UtilityTruck::getColour()
{

	cout << "This " << *ptr_type << "'s colour is: " << *ptr_colour << endl;

	return *ptr_colour;
}

/*
This is the getSeats function, which will return the value of the seats input in the constructor for this class. It will also print a message to the console to advise how many seats it has.
*/

int UtilityTruck::getSeats()
{

	cout << "This " << *ptr_type << " has: " << *ptr_seats << " seats." << endl;

	return *ptr_seats;
}

/*
This is the getWheels function. This will return the value for the wheels input in the constructor and print the value to the console.
*/

int UtilityTruck::getWheels()
{

	cout << "The number of wheels on " << s_name << " is: " << *ptr_wheels << endl;

	return *ptr_wheels;
}

/*
This is the accelerationCalculation function.This will take in 4 values to work out the acceleration of the vehicle.
The values are taken from a standing position to a value provided at a particular velocity(same with time) to return anaverage acceleration for the vehicle.
This value is then assigned to ptr_accelerationand the acceleration is printed to the console.
*/

float UtilityTruck::accelerationCalculation(float f_vZero, float f_vOne, float f_tZero, float f_tOne) const
{

	*ptr_acceleration = (f_vOne - f_vZero) / (f_tOne - f_tZero);

	cout << s_name << "'s acceleration is: " << *ptr_acceleration << "mph. " << endl;

	return *ptr_acceleration;

}

/*
This is the Builder function, which calls the functions above which do not need the user to input data.
Using the "this" keyword, means it will only print out the values which are associated with that particular object in the main Source.cpp file.
*/

void UtilityTruck::Builder()
{

	this->getName();
	this->getColour();
	this->getWheels();
	this->getWeight();
	this->getSeats();
	this->getPosition();
	this->getPassenger();

}