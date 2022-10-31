#include"TruckTList.h"
#include"TruckSerealizer.h"
#include "TruckList.h"


using namespace TempletedLists;
TruckList::TruckList()
{
	TruckSerializer::ReadTrucksFromFile(items, current);
}

TruckList::~TruckList()
{
	TruckSerializer::WriteTrucksToFile(items, current);
}

void TruckList::Add(Truck& truck)
{
	List<Truck>::Add(truck);
}


void TruckList::writeLongestTruck() const
{
	int max = items[0].getLenght();
	int imax = 0;

	for (int i = 1; i < current; i++)
	{
		if (items[i].getLenght() > max)
		{
			max = items[i].getLenght();
			imax = i;
		}
	}
	items[imax].WriteToConsole();
}

void TempletedLists::TruckList::WriteAllToConsole() const
{
	List<Truck>::WriteAllToConsole();
}


bool TruckList::isExist(Truck& truck) {
	for (int i = 0; i < current; i++) {
		if (truck.getName() == items[i].getName()) {
			return true;
		}
	}
	return false;
}