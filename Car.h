#pragma once

#include "Vehicle.h"

/*
This is the Car class, which inherits from the Vehicle class.

By using polymorphism, the getName, getWeight, accelerationCalculation, getColour, getWheels, getSeats and Builder functions are overridden to produce different results from the same named functions in other classes which derived from Vehicle.
Additionally, we have set another virtual deconstructor for Car.

In the overridden constructor, we take in the values for the wheels, colour, seats and weight which are input by the user in the main. These have pointers associated with them, so that the parameters input by the user are sent back to the vehicle class and can be used in the functions
located in the .cpp file for Car.

I have also set two private variables for car capacity and the number of cylinders the vehicle has. These values are set in in the typeOfCar function depending on what type of vehicle is selected. (These are default values at this time, as most vehicles have the same capacity and number of cylinders based on their model.
I have made some getter and setter functions for these variables to be called in this class only, as the other derived classes did not inherit these.
*/

class Car : public virtual Vehicle
{

private:

	float f_capacity;

	int i_numberOfCylinders;

	

public:

	Car() {};

	Car(int i_wheels, string s_colour, float f_weight, int i_seats)
	{
		*ptr_wheels = i_wheels;
		*ptr_colour = s_colour;
		*ptr_seats = i_seats;
		*ptr_weight = f_weight;
	}
	
	VirtualDestructor* vd = new VirtualDerived;
	~Car() { delete vd; cout << "Car deconstructor called!" << endl; }

	void getName() override;
	float getWeight() override;
	float accelerationCalculation(float f_vZero, float f_vOne, float f_tZero, float f_tOne) const override;
	string getColour() override;
	int getWheels() override;
	int getSeats() override;
	void Builder() override;

	float setCapacity(float volume);
	void getCapacity();

	int setCylinders(int amount);
	void getCylinders();

	int typeOfCar(int i_carNum);

};