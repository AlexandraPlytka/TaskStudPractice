#pragma once
#include"Vehicle.h"

class Car : public Vehicle {
	int capacityPassangers;
public:
	Car(string name = "", string model = "", int year = 2020, int capacity = 200, int cpass = 10);
	void writeToConsole();
	int getPassangers();
	friend ostream& operator<<(ostream& out, const Car& c);
	friend istream& operator>>(istream& in, Car& c);
};