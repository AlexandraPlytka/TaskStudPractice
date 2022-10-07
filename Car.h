#pragma once
#include"Vehicle.h"

class Car : public Vehicle {
	int capacityPassangers;
public:
	Car(string name, string model, int year, int capacity, int cpass);
	void writeToConsole();
};