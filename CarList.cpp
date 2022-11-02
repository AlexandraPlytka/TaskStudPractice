#include"CarList.h"
#include"CarSerializer.h"

using namespace InheritanceLists;
CarList::CarList()
{
	Car** cars;
	CarSerializer::ReadCarsFromFile(cars, current);
	basevehicles = (Vehicle**)cars;
}

CarList::~CarList()
{
	//CarSerializer::WriteCarsToFile((Car**)basevehicles, current);
}

void CarList::Add(Car& car)
{
	BaseVehicleList::Add(new Car(car));
	CarSerializer::WriteCarsToFile((Car**)basevehicles, current);
}

void CarList::WriteToConsoleMostPassangers() const
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
	basevehicles[imax]->WriteToConsole();
}

void CarList::WriteAllToConsole()const {
	for (int i = 0; i < current; i++) {
		((Car**)basevehicles)[i]->WriteToConsole();
	}
}
bool CarList::isExist(Car& car) {
	for (int i = 0; i < current; i++) {
		if (((Car**)basevehicles)[i]->getName() == car.getName())
			return true;
	}
	return false;
}