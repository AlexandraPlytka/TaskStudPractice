#pragma once
#include"Car.h"

class CarSerializer {
public:
	static void ReadCarsFromFile(Car**& cars, int& count);
	static void WriteCarsToFile(Car** cars, int count);

	static void ReadCarsFromFile(Car*& cars, int& count);
	static void WriteCarsToFile(Car* cars, int count);


};