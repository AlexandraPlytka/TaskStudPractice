#include"CarList.h"
#include"CarSerializer.h"

CarList::CarList()
{
	Car** cars;
	CarSerializer  link;
	link.ReadCarsFromFile(cars, current);
	basevehicles = (Vehicle**)cars;
}

CarList::~CarList()
{
	CarSerializer link;
	link.WriteCarsToFile((Car**)basevehicles, current);
}

void CarList::AddCars(Car& car)
{
	BaseVehicleList::Add(new Car(car));
}

void CarList::WriteToConsoleMostPassangers()
{
	int max = ((Car**)basevehicles)[0]->getPassangers();
	int imax = 0;

	for (int i = 1; i < current; i++)
	{
		if (((Car**)basevehicles)[i]->getPassangers() > max)
		{
			max = ((Car**)basevehicles)[i]->getPassangers();
			imax = i;
		}
	}
	basevehicles[imax]->writeToConsole();
}
