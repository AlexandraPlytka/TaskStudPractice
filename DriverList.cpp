#include "DriverList.h"
#include"DriverSerializer.h"
#include <iostream>

DriverList::DriverList()
{
	DriverSerializer link;
	link.ReadDriversFromFile(drivers,current);
	//DriverSerializer::ReadDriversFromFile(drivers, current);
}

DriverList::~DriverList()
{
	DriverSerializer link;
	link.WriteDriversToFile(drivers, current);
	delete[] drivers;
}

void DriverList::AddDriver(Driver& driver)
{
	drivers[current] = driver;
	current++;
}

void DriverList::WriteToConsole()
{
	for (int i = 0; i < current; i++) {
		drivers[i].writeToConsole();
	}
}

void DriverList::WriteDriverWithMostExperience()
{
	int max = drivers[0].getExperience();
	int imax = 0;
	for (int i = 0; i < current; i++)
	{
		if (drivers[i].getExperience() > max)
		{
			max = drivers[i].getExperience();
			imax = i;
		}

	}
	drivers[imax].writeToConsole();
}

Driver DriverList::GetDriverByCode(string code) {
	if (isCodeExist(code)) {
		for (int i = 0; i < current; i++) {
			if (drivers[i].getDriverCode() == code) {
				return drivers[i];
			}
		}
	}
	else {
		throw "no driver with such code";
	}
}


void DriverList::WriteToConsoleDriverByDriverCode(string code)
{
	DriverList::GetDriverByCode(code).writeToConsole();
}

bool DriverList::isCodeExist(string code)
{
	for (int i = 0; i < current; i++) {
		if (code == drivers[i].getDriverCode()) {
			return true;
		}
	}
	return false;
}

string DriverList::getLastDriverCode()
{
	return drivers[current-1].getDriverCode();
}

