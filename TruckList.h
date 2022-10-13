#pragma once
#include"VehicleList.h"
#include"Trucks.h"

class TruckList : public BaseVehicleList {
public:
	TruckList();
	~TruckList();
	void AddTruck(Truck& truck);
	//bool isExist(Truck& truck);
	void writeLongestTruck();
	/*void WriteToConsoleTheOldest();
	void WriteToConsoleTheBiggestCapacity();*/
	//Vehicle GetVehicleByItsName(string name = "");
	//void WriteInfoAboutVehicleByITSName(string name = "");
};