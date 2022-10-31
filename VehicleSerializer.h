#pragma once
#include"Vehicle.h"

class VehicleSerializer {

public:
	static void ReadVehiclesFromFile(Vehicle**& vehicles, int& count);

	static void WriteVehiclesToFile(Vehicle** vehicles, int count);

	static void ReadVehiclesFromFile(Vehicle*& vehicles, int& count);

	static void WriteVehiclesToFile(Vehicle* vehicles, int count);

};