#include "TruckList.h"
#include"TruckSerealizer.h"

TruckList::TruckList()
{
	Truck** trucks;
	TruckSerializer link;
	link.ReadTrucksFromFile(trucks, current);
	basevehicles = (Vehicle**)trucks;
}


TruckList::~TruckList()
{
	TruckSerializer link;
	link.WriteTrucksToFile((Truck**)basevehicles, current);
}

void TruckList::AddTruck(Truck& truck)
{
	BaseVehicleList::Add(new Truck(truck));
}

void TruckList::writeLongestTruck()
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
	basevehicles[imax]->writeToConsole();
}

