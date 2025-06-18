#pragma once

#include "Vehicle.h"

/*
This is the Truck class which inherits from the Vehicle class.

In the private section are a number of variables which are used to determine if the vehicle is a utility vehicle, whether the vehicle has a trailer or not and the number of passengers which that vehicle can hold, which are used in the derived classes calculatePassngersToCarry functions.

In the protected section are two pointers which are used to store information for the derived classes to utilise, when this information is input by the user in the main Source.cpp.
There is also a float for the weight of a human, which is used to calculate the passengers to carry.

In the public section is the default constructor for Truck, a virtual int for calculating the passengers to carry which is used by both derived classes, a void function to get the passenger limit, and two boolean functions to set the status of whether it is a utility vehicle or has a trailer and associated
void functions to get these values.
*/

class Truck : public virtual Vehicle
{

private:

	bool b_utility;
	bool b_trailer;
	int i_passengers;

protected:

	int* ptr_passengers = &i_passengers;
	bool* ptr_trailer = &b_trailer;

	float f_humanWeight = 80.f;

public:

	Truck() {};

	virtual int calculatePassengersToCarry(int passenger) { return 0; }
	void getPassenger();

	bool utilityStatus(bool status);
	void getUtilityStatus();

	bool setTrailer(bool trailer);
	void getTrailer();




};