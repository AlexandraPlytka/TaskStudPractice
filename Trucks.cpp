#include"Trucks.h"
#include <iostream>

Truck::Truck(string name, string model, int year, int capacity, int lenght)
: Vehicle(name,model,year,capacity), lenght(lenght){
	
}

int Truck::getLenght()
{
	return lenght;
}

void Truck::writeToConsole()
{
	cout <<"Truck " << name << " " << model << " " << year << " " << capacity << " " << lenght << endl;
}

