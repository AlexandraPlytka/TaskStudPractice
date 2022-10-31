#include"CarTList.h"
#include"CarSerializer.h"


using namespace TempletedLists;
CarList::CarList()
{
	CarSerializer::ReadCarsFromFile(items, current);
}

CarList::~CarList()
{
	CarSerializer::WriteCarsToFile(items, current);
}

void CarList::Add(Car& car)
{
	List<Car>::Add(car);
}

void CarList::WriteToConsoleMostPassangers() const
{
	int max = items[0].getPassangers();
	int imax = 0;

	for (int i = 1; i < current; i++)
	{
		if (items[i].getPassangers() > max)
		{
			max = items[i].getPassangers();
			imax = i;
		}
	}
	items[imax].WriteToConsole();
}

bool TempletedLists::CarList::isExist(Car& car)
{
	for (int i = 0; i < current; i++) {
		if (car.getName() == items[i].getName()) {
			return true;
		}
	}
	return false;
}

void TempletedLists::CarList::WriteAllToConsole() const
{
	List<Car>::WriteAllToConsole();
}
