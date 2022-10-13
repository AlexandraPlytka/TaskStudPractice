#pragma once
#include"Vehicle.h"

class VehicleSerializer {

public:
	void ReadVehiclesFromFile(Vehicle**& vehicles, int& count);

	void WriteVehiclesToFile(Vehicle** vehicles, int count);

};