#include"VehicleList.h"
#include"VehicleSerializer.h"
#include<iostream>
using namespace std;

VehicleList::VehicleList()
{
	Vehicle** vehicles;
	VehicleSerializer link;
	link.ReadVehiclesFromFile(vehicles, current);
	basevehicles = (Vehicle**)vehicles;
}

VehicleList::~VehicleList()
{
	VehicleSerializer link;
	link.WriteVehiclesToFile((Vehicle**) basevehicles, current);
	//delete[] vehicles;
}

void VehicleList::AddVehicle(Vehicle& vehicle)
{
	BaseVehicleList::Add(new Vehicle(vehicle));
}
//
//bool VehicleList::isExist(Vehicle& vehicle)
//{
//	for (int i = 0; i < current; i++)
//	{
//		if ((*vehicles)[i].getName() == vehicle.getName())
//			return true;
//	}
//	return false;
//}


void VehicleList::WriteToConsoleTheBiggestCapacity()
{
	int max = ((Vehicle**)basevehicles)[0]->getCapacity();
	int imax = 0;

	for (int i = 1; i < current; i++)
	{
		if (((Vehicle**)basevehicles)[i]->getCapacity() > max)
		{
			max = ((Vehicle**)basevehicles)[i]->getCapacity();
			imax = i;
		}
	}
	basevehicles[imax]->writeToConsole();
}
