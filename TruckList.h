#pragma once
#include"VehicleList.h"
#include"Trucks.h"

class TruckList : public VehicleList {
	Truck* trucks;
	int current;

};