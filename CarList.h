#pragma once
#include"BaseVehicleList.h"
#include"Car.h"

class CarList : public BaseVehicleList {
public:
	CarList();
	~CarList();
	void AddCars(Car& car);
	void WriteToConsoleMostPassangers();
};