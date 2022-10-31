#include"VehicleTList.h"
#include"VehicleSerializer.h"


using namespace TempletedLists;
VehicleList::VehicleList()
{
	VehicleSerializer::ReadVehiclesFromFile(items, current);
}

VehicleList::~VehicleList()
{
	VehicleSerializer::WriteVehiclesToFile(items, current);
}

void VehicleList::Add(Vehicle& vehicle)
{
	List<Vehicle>::Add(vehicle);
}

void VehicleList::WriteToConsoleTheBiggestCapacity() const
{
	int max = items[0].getCapacity();
	int imax = 0;

	for (int i = 1; i < current; i++)
	{
		if (items[i].getCapacity() > max)
		{
			max = items[i].getCapacity();
			imax = i;
		}
	}
	items[imax].WriteToConsole();
}


void TempletedLists::VehicleList::WriteInfoAboutVehicleByITSName(string name)
{
	for (int i = 0; i < current; i++) {
		if (items[i].getName() == name) {
			items[i].WriteToConsole();
			break;
		}
	}
}

bool VehicleList::isExist(Vehicle& vehicle)
{
	for (int i = 0; i < current; i++) {
		if (vehicle.getName() == items[i].getName()) {
			return true;
		}
	}
	return false;
}

void VehicleList::WriteAllToConsole() const
{
	List<Vehicle>::WriteAllToConsole();
}

Vehicle VehicleList::GetVehicleByItsName(string name) {
	
	int c = 0;
	for (int i = 0; i < current; i++) {
		if (items[i].getName() == name) {
			c = i;
		}
	}
	return items[c];
}

bool VehicleList::isExist(string name) {

	for (int i = 0; i < current; i++) {
		if (items[i].getName() == name) {
			return true;
		}
	}
	return false;
}
