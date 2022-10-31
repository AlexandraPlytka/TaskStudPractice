#include"Trucks.h"
#include <iostream>

Truck::Truck(string name, string model, int year, int capacity, int lenght)
: Vehicle(name,model,year,capacity), lenght(lenght){
	
}

int Truck::getLenght()
{
	return lenght;
}

void Truck::WriteToConsole()
{
	cout <<"Truck " << name << " " << model << " " << year << " " << capacity << " " << lenght << endl;
}


ostream& operator<<(ostream& out, const Truck& c)
{
	out << c << " " << c.model << " " << c.year << " " << c.capacity << " " << c.lenght << endl;
	return out;
}

istream& operator>>(istream& in, Truck& c)
{
	cout << "Name: ";
	in >> c.name;
	cout << "Model: ";
	in >> c.model;
	cout << "Production year: ";
	in >> c.year;
	cout << "Capacity: ";
	in >> c.capacity;
	cout << "Lenght: ";
	in >> c.lenght;
	return in;
}
