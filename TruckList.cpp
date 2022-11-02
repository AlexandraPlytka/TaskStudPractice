#include "TruckList.h"
#include"TruckSerealizer.h"
#include "TruckTList.h"
using namespace InheritanceLists;

TruckList::TruckList()
{
	Truck** trucks;
	TruckSerializer ::ReadTrucksFromFile(trucks, current);
	basevehicles = (Vehicle**)trucks;
}


TruckList::~TruckList()
{
	TruckSerializer::WriteTrucksToFile((Truck**)basevehicles, current);
}

void TruckList::Add(Truck& truck)
{
	BaseVehicleList::Add(new Truck(truck));
	TruckSerializer::WriteTrucksToFile((Truck**)basevehicles, current);
}


void TruckList::writeLongestTruck() const
{
	int max = ((Truck**)basevehicles)[0]->getLenght();
	int imax = 0;

	for (int i = 1; i < current; i++)
	{
		if (((Truck**)basevehicles)[i]->getLenght() > max)
		{
			max = ((Truck**)basevehicles)[i]->getLenght();
			imax = i;
		}
	}
	basevehicles[imax]->WriteToConsole();
}

bool TruckList::isExist(Truck& truck) {
	for (int i = 0; i < current; i++) {
		if (truck.getName() == ((Truck**)basevehicles)[i]->getName()) {
			return true;
		}
	}
	return false;
}

void TruckList::WriteAllToConsole()const {
	for (int i = 0; i < current; i++) {
		((Truck**)basevehicles)[i]->WriteToConsole();
	}
}