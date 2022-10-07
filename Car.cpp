#include "Car.h"
#include <iostream>

Car::Car(string name, string model, int year, int capacity, int cpass)
	: Vehicle(name, model, year, capacity), capacityPassangers(cpass){

}
void Car::writeToConsole()
{
	cout << "Car " << name << " " << model << " " << year << " " << capacity << " " << capacityPassangers << endl;
}

