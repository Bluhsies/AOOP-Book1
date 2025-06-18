#pragma once

#include "Truck.h"

/*
This is the UtilityTruck class, which inherits from the Truck class.

By using polymorphism, the getName, getWeight, accelerationCalculation, getColour, getWheels, getSeats and Builder functions are overridden to produce different results from the same named functions in other classes which derived from Vehicle.
Additionally, we have set another virtual deconstructor for UtilityTruck.

In the overridden constructor, we take in the values for the wheels, colour, seats and weight which are input by the user in the main. These have pointers associated with them, so that the parameters input by the user are sent back to the vehicle class and can be used in the functions
located in the .cpp file for UtilityTruck.

It also takes in the overridden function for calculatePassengersToCarry.

Within the private section are two string variables for the utility and emergency types, which are used within the getUtilityType and getEmergencyType functions in the .cpp file for this class only.
*/

class UtilityTruck : public virtual Truck
{

private:

	string s_utilityType;

	string s_emergency;

public:

	UtilityTruck() {};
	
	UtilityTruck(int i_wheels, string s_colour, float f_weight, int i_seats)
	{
		*ptr_wheels = i_wheels;
		*ptr_colour = s_colour;
		*ptr_seats = i_seats;
		*ptr_weight = f_weight;

	}

	VirtualDestructor* vd = new VirtualDerived;
	~UtilityTruck() { delete vd; cout << "UtilityTruck deconstructor called!" << endl; }

	int calculatePassengersToCarry(int i_passenger) override;
	int typeOfUtility(int i_UtilityNum);
	void getUtilityType();
	void getEmergencyType();
	void getName() override;
	float getWeight() override;
	float accelerationCalculation(float f_vZero, float f_vOne, float f_tZero, float f_tOne) const override;
	string getColour() override;
	int getWheels() override;
	int getSeats() override;
	void Builder() override;

};