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



int Vehicle::getYear()
{
	return year;
}

int Vehicle::getAge()
{
	return 2022 - year;
}

int Vehicle::getCapacity()
{
	return capacity;
}

string Vehicle::getName()
{
	return name;
}

string Vehicle::getModel()
{
	return model;
}

void Vehicle::writeToConsole()
{
	cout << name << " " << model << " " << year << " " << capacity << endl;
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


