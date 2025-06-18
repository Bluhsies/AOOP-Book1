#pragma once

#include "GameObject.h"

/*
This is the Vehicle class, which is derived from GameObject.

Within the private section are the variables which are used by all of the classes which derive from Vehicle (Car, Bike, CommercialTruck, UtilityTruck) to set the type, number of seats, colour, acceleration, weight and number of wheels for the vehicles.

In the protected section are a number of pointers which are used to send the information input from constructors/functions in the derived classes back to the vehicle class to be stored and have access to the variables in the private section.

In public, we have the default constructor and the construction of the inherited virtual deconstructor from the GameObject class, due to this using the virtual function drawStuff.
The setType function will take in a string to set the type of vehicle which is used in the derived classes from Vehicle.

There are a number of virtual functions which have been set to be used in the derived classes, which are to get the weight, name, colour, wheels, seats and acceleration of the vehicles. Additionally, there is a Builder class which is used, as well.
*/

class Vehicle : public virtual GameObject
{

private:

	string s_type;
	int i_seats;
	string s_colour;
	float f_acceleration;
	float f_weight;
	int i_wheels = 0;


protected:

	
	int* ptr_wheels = &i_wheels;
	int* ptr_seats = &i_seats;
	string* ptr_colour = &s_colour;
	float* ptr_weight = &f_weight;
	float* ptr_acceleration = &f_acceleration;
	string* ptr_type = &s_type;

public:

	Vehicle() {};
	VirtualDestructor* vd = new VirtualDerived;
	~Vehicle() { delete vd; cout << "Vehicle deconstructor called!" << endl; }

	void setType(string type);

	virtual float getWeight() { return 0; }
	virtual void getName() {};
	virtual string getColour() { return 0; }
	virtual int getWheels() { return 0; }
	virtual int getSeats() { return 0; }
	virtual void Builder() {};

	virtual float accelerationCalculation(float f_vZero, float f_vOne, float f_tZero, float f_tOne) const { return 0; }

	void drawStuff(sf::RenderTarget& target) override;

};