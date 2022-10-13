#include "Car.h"
#include <iostream>

Car::Car(string name, string model, int year, int capacity, int cpass)
	: Vehicle(name, model, year, capacity), capacityPassangers(cpass){
}
void Car::writeToConsole()
{
	cout << "Car " << name << " " << model << " " << year << " " << capacity << " " << capacityPassangers << endl;
}

int Car::getPassangers()
{
	return this->capacityPassangers;
}


ostream& operator<<(ostream& out, const Car & c)
{
	out << c.name << " " << c.model << " " << c.year << " " << c.capacity << " " << c.capacityPassangers << endl;
	return out;
}

istream& operator>>(istream& in, Car& c)
{
	cout << "Name: ";
	in >> c.name;
	cout << "Model: ";
	in >> c.model;
	cout << "Production year: ";
	in >> c.year;
	cout << "Capacity: ";
	in >> c.capacity;
	cout << "Seats: ";
	in >> c.capacityPassangers;
	return in;
}
