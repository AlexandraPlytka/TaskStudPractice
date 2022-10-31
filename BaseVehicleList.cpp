#include"BaseVehicleList.h"
#include<iostream>
#include "VehicleList.h"

void BaseVehicleList::Add(Vehicle* vehicle)
{
	basevehicles[current] = vehicle;
	current++;
}

BaseVehicleList::BaseVehicleList()
{
	current = 0;
	basevehicles = new Vehicle * [100];
}

BaseVehicleList::~BaseVehicleList()
{
	for (int i = 0; i < current; i++)
		delete basevehicles[i];

	delete[] basevehicles;
}

bool BaseVehicleList::isExist(string vehiclename)
{
	for (int i = 0; i < current; i++) {
		if (basevehicles[i]->getName() == vehiclename)
			return true;
	}
	return false;
}

void BaseVehicleList::WriteAllToConsole() const
{
	for (int i = 0; i < current; i++)
	{
		basevehicles[i]->WriteToConsole();
		cout << endl;
	}
}

Vehicle BaseVehicleList::GetVehicleByItsName(string name)
{
	for (int i = 0; i < current; i++) {
		if (basevehicles[i]->getName() == name) {
			return basevehicles[i];
		}
	}
}


void BaseVehicleList::WriteInfoAboutVehicleByITSName(string name)
{
	bool exist = false;
	for (int i = 0; i < current; i++) {
		if (name == basevehicles[i]->getName())
			exist = true;
	}
	if (exist) {
		BaseVehicleList ::GetVehicleByItsName(name).WriteToConsole();
	}
	else {
		throw "NO such vehicle found";
	}
}


void BaseVehicleList::WriteToConsoleTheOldest()
{

	int max = basevehicles[0]->getAge();
	int imax = 0;

	for (int i = 1; i < current; i++)
	{
		if (basevehicles[i]->getAge() > max)
		{
			max = basevehicles[i]->getAge();
			imax = i;
		}
	}

	basevehicles[imax]->WriteToConsole();
}
