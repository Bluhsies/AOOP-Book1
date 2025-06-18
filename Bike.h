#pragma once

#include "Vehicle.h"

/*
This is the Bike class, which inherits from the Vehicle class.

By using polymorphism, the getName, getWeight, accelerationCalculation, getColour, getWheels, getSeats and Builder functions are overridden to produce different results from the same named functions in other classes which derived from Vehicle.
Additionally, we have set another virtual deconstructor for Bike.

In the overridden constructor, we take in the values for the wheels, colour, seats and weight which are input by the user in the main. These have pointers associated with them, so that the parameters input by the user are sent back to the vehicle class and can be used in the functions
located in the .cpp file for Bike.
*/

class Bike : public virtual Vehicle
{

public:

	Bike() {  };

	Bike(int i_wheels, string s_colour, float f_weight, int i_seats)
	{
		*ptr_wheels = i_wheels;
		*ptr_colour = s_colour;
		*ptr_seats = i_seats;
		*ptr_weight = f_weight;
	}

	VirtualDestructor* vd = new VirtualDerived;
	~Bike() { delete vd; cout << "Bike deconstructor called!" << endl; }

	void getName() override;
	int typeOfBike(int i_bikeNum);
	float getWeight() override;
	float accelerationCalculation(float f_vZero, float f_vOne, float f_tZero, float f_tOne) const override;
	string getColour() override;
	int getWheels() override;
	int getSeats() override;
	void Builder() override;
	
private:

	
};