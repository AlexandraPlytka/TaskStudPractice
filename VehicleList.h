#pragma once
#include"Vehicle.h"
class VehicleList {
	Vehicle* vehicles;
	int current;
public:
	VehicleList();
	~VehicleList();
	void AddVehicle(Vehicle& vehicle);
	bool isExist(Vehicle& vehicle);
	bool isExist(string vehiclename);
	void WriteToConsole();
	void WriteToConsoleTheOldest();
	void WriteToConsoleTheBiggestCapacity();
	Vehicle GetVehicleByItsName(string name = "");
	void WriteInfoAboutVehicleByITSName(string name = "");
};