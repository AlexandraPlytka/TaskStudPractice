#pragma once
#include"Vehicle.h"

class Truck :public Vehicle {
	int lenght;
public:
	Truck(string name = "", string model = "", int year = 2022, int capacity = 100, int lenght = 0);
	int getLenght();
	void writeToConsole();
};