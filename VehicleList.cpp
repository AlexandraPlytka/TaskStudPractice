#include"VehicleList.h"
#include"VehicleSerializer.h"
#include<iostream>
using namespace std;
using namespace InheritanceLists;

VehicleList::VehicleList()
{
	Vehicle** vehicles;
	VehicleSerializer::ReadVehiclesFromFile(vehicles, current);
	basevehicles = (Vehicle**)vehicles;
}

VehicleList::~VehicleList()
{
//	VehicleSerializer::WriteVehiclesToFile((Vehicle**) basevehicles, current);
	//delete[] vehicles;
}

void VehicleList::Add(Vehicle& vehicle)
{
	BaseVehicleList::Add(new Vehicle(vehicle));
	VehicleSerializer::WriteVehiclesToFile((Vehicle**)basevehicles, current);

}

bool VehicleList::isExist(Vehicle& vehicle)
{
	for (int i = 0; i < current; i++)
	{
		if (((Vehicle**)basevehicles)[i]->getName() == vehicle.getName())
			return true;
	}
	return false;
}


void VehicleList::WriteToConsoleTheBiggestCapacity() const
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
	basevehicles[imax]->WriteToConsole();
}
void VehicleList::WriteAllToConsole()const {
	for (int i = 1; i < current; i++)
	{
		((Vehicle**)basevehicles)[i]->WriteToConsole();
	}
}

void VehicleList::WriteInfoAboutVehicleByITSName(string name)
{
	for (int i = 0; i < current; i++) {
		if (((Vehicle**)basevehicles)[i]->getName() == name) {
			((Vehicle**)basevehicles)[i]->WriteToConsole();
			break;
		}
	}
}

Vehicle InheritanceLists::VehicleList::GetVehicleByItsName(string name)
{
	int c = 0;
	for (int i = 0; i < current; i++) {
		if (basevehicles[i]->getName() == name) {
			c = i;
		}
	}
	return basevehicles[c];
}

bool InheritanceLists::VehicleList::isExist(string name)
{
	for (int i = 0; i < current; i++) {
		if (basevehicles[i]->getName() == name) {
			return true;
		}
	}
	return false;
}
