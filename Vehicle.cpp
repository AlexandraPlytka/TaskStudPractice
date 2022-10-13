#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(string name, string model, int year, int capacity)
{
	if (year <= 0)
		throw "year is 0 or negative";
	if (capacity < 0)
		throw "capacity cannot be negative";

	this->name = name;
	this->model = model;
	this->year = year;
	this->capacity = capacity;

}

Vehicle::Vehicle(Vehicle*& vehicle)
{
	this->model = vehicle->getModel();
	this->year = vehicle->getYear();
	this->name = vehicle->getName();
	this->capacity = vehicle->getCapacity();
}



int Vehicle::getYear()
{
	return this->year;
}

int Vehicle::getAge()
{
	return 2022 - this->year;
}

int Vehicle::getCapacity()
{
	return this->capacity;
}

string Vehicle::getName()
{
	return this->name;
}

string Vehicle::getModel()
{
	return this->model;
}

void Vehicle::writeToConsole()
{
	cout << this->getName() << " " << this->getModel() << " " << this->getYear() << " " << this->getCapacity() << endl;
}

void Vehicle::operator=(Vehicle c)
{
	name = c.name;
	model = c.model;
	year = c.year;
	capacity = c.capacity;
}

ostream& operator<<(ostream& out, const Vehicle& c)
{
	out << c.name << " " << c.model << " " <<c.year << " " << c.capacity << endl;
	return out;
}

istream& operator>>(istream& in, Vehicle& c)
{
	cout << "Name: ";
	in >> c.name;
	cout << "Model: ";
	in >> c.model;
	cout << "Production year: ";
	in >> c.year;
	cout << "Capacity: ";
	in >> c.capacity;
	return in;
}


