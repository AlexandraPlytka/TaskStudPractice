#pragma once
#include"Car.h"

class CarSerializer {
public:
	void ReadCarsFromFile(Car**& cars, int& count);

	void WriteCarsToFile(Car** cars, int count);
};