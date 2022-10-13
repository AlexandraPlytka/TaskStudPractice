#pragma once
#include"Trucks.h"


class TruckSerializer {
public:
	void ReadTrucksFromFile(Truck**& trucks, int& count);

	void WriteTrucksToFile(Truck** trucks, int count);
};