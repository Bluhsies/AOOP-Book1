#pragma once

#include "Truck.h"


/*
This is the CommercialTruck class, which inherits from the Truck class.

By using polymorphism, the getName, getWeight, accelerationCalculation, getColour, getWheels, getSeats and Builder functions are overridden to produce different results from the same named functions in other classes which derived from Vehicle.
Additionally, we have set another virtual deconstructor for CommercialTruck.

In the overridden constructor, we take in the values for the wheels, colour, seats and weight which are input by the user in the main. These have pointers associated with them, so that the parameters input by the user are sent back to the vehicle class and can be used in the functions
located in the .cpp file for CommercialTruck.

It also takes in the overridden function for calculatePassengersToCarry.

Additional functions purely for this class are getCarryWeight and typeOfCommercial. There is also a private float for capacity to carry, which is used to determine how much weight the vehicle can hold as a maximum load.
*/

class CommercialTruck : public virtual Truck
{
private:

	float f_capacityToCarry;
	

public:

	CommercialTruck() {};
	

	CommercialTruck(int i_wheels, string s_colour, float f_weight, int i_seats)
	{
		*ptr_wheels = i_wheels;
		*ptr_colour = s_colour;
		*ptr_seats = i_seats;
		*ptr_weight = f_weight;
	}

	VirtualDestructor* vd = new VirtualDerived;
	~CommercialTruck() { delete vd; cout << "CommercialTruck deconstructor called!" << endl; }

	int calculatePassengersToCarry(int i_passenger) override;
	int typeOfCommercial(int i_commercialType);
	void getName() override;
	float getWeight() override;
	float accelerationCalculation(float f_vZero, float f_vOne, float f_tZero, float f_tOne) const override;
	string getColour() override;
	int getWheels() override;
	int getSeats() override;
	void Builder() override;
	void getCarryWeight();

};