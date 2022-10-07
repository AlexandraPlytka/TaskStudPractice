#pragma once
#include"VehicleSerializer.h"
#include"Trucks.h"


class TruckSerializer : public VehicleSerializer {
	void ReadTrucksFromFile(Truck*& trucks, int& count);

	void WriteTrucksToFile(Truck* trucks, int count);
};