#pragma once
#include"Vehicle.h"
#include"BaseVehicleList.h"
class VehicleList: public BaseVehicleList{
	
public:
	VehicleList();
	~VehicleList();
	void AddVehicle(Vehicle& vehicle);
	void WriteToConsoleTheBiggestCapacity();
	//void WriteToConsoleTheOldest();
	/*bool isExist(Vehicle& vehicle);
	void WriteToConsole();*/
	//void WriteToConsoleTheOldest();
	//void WriteToConsoleTheOldest();
};