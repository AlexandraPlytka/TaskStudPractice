#include"VehicleList.h"
#include"VehicleSerializer.h"
#include<iostream>
using namespace std;

VehicleList::VehicleList()
{
	VehicleSerializer link;
	link.ReadVehiclesFromFile(vehicles, current);
}

VehicleList::~VehicleList()
{
	VehicleSerializer link;
	link.WriteVehiclesToFile(vehicles, current);
	delete[] vehicles;
}

void VehicleList::AddVehicle(Vehicle& vehicle)
{
	vehicles[current] = vehicle;
	current++;
}

bool VehicleList::isExist(Vehicle& vehicle)
{
	for (int i = 0; i < current; i++)
	{
		if (vehicles[i].getName() == vehicle.getName())
			return true;
	}
	return false;
}

bool VehicleList::isExist(string vehiclename)
{
	for (int i = 0; i < current; i++)
	{
		if (vehicles[i].getName() == vehiclename)
			return true;
	}
	return false;
}

void VehicleList::WriteToConsole()
{
	for (int i = 0; i < current; i++) {
		vehicles[i].writeToConsole();
	}
}

void VehicleList::WriteToConsoleTheOldest()
{

	int max = vehicles[0].getAge(); 
	int imax = 0;

	for (int i = 1; i < current; i++)
	{
		if (vehicles[i].getAge() > max)
		{
			max = vehicles[i].getAge();
			imax = i;
		}
	}

	vehicles[imax].writeToConsole();
}

void VehicleList::WriteToConsoleTheBiggestCapacity()
{
	int max = vehicles[0].getCapacity();
	int imax = 0;

	for (int i = 1; i < current; i++)
	{
		if (vehicles[i].getCapacity() > max)
		{
			max = vehicles[i].getCapacity();
			imax = i;
		}
	}

	vehicles[imax].writeToConsole();
}

Vehicle VehicleList::GetVehicleByItsName(string name)
{
	for (int i = 0; i < current; i++) {
		if (vehicles[i].getName() == name) {
			return vehicles[i];
		}
	}

}


void VehicleList::WriteInfoAboutVehicleByITSName(string name)
{
	bool exist = false;
	for (int i = 0; i < current; i++) {
		if (name == vehicles[i].getName())
			exist = true;
	}
	if (exist) {
		VehicleList::GetVehicleByItsName(name).writeToConsole();
	}
	else {
		throw "NO such vehicle found";
	}
}

