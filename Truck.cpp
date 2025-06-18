#include "Truck.h"

/*
This is the getPassenger function, which will print a message to the console based on the value associated with i_passengers.
*/

void Truck::getPassenger()
{

	cout << "This " << *ptr_type << " can hold: " << i_passengers << " passengers. " << endl;

}

/*
This is the utilityStatus function, which returns the value input in the derived classes' functions.
*/

bool Truck::utilityStatus(bool status)
{

	b_utility = status;

	return b_utility;

}

/*
This is the getUtilityStatus function, which prints a message to the console whether b_utility is true or false and informs the user if it is a utility vehicle or not.
*/

void Truck::getUtilityStatus()
{

	if(b_utility == true)
	{

		cout << "This is a utility truck. " << endl;

	}
	else
	{

		cout << "This is not a utility truck. " << endl;

	}


}

/*
This is the setTrailer function, which is mainly called in Source.cpp to determine if the vehicle has a trailer. In the commercial vehicle class, this will determine which sprite is drawn to the screen.
*/

bool Truck::setTrailer(bool trailer)
{

	b_trailer = trailer;

	return b_trailer;

}

/*
This is the getTrailer function which will print a message to the console based on whether b_trailer is true or false and informs the user on the console if the vehicle has a trailer.
*/

void Truck::getTrailer()
{

	if (b_trailer == true)
	{

		cout << "This truck has a trailer. " << endl;

	}
	else
	{

		cout << "This truck does not have a trailer. " << endl;

	}

}

