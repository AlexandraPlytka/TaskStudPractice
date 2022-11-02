#include "DriverList.h"
#include"DriverSerializer.h"
#include <iostream>

using namespace InheritanceLists;

DriverList::DriverList()
{
	DriverSerializer::ReadDriversFromFile(drivers, current);
}

DriverList::~DriverList()
{
	//DriverSerializer::WriteDriversToFile(drivers, current);
	delete[] drivers;
}

void DriverList::Add(Driver& driver)
{
	drivers[current] = driver;
	current++;
	DriverSerializer::WriteDriversToFile(drivers, current);
}

void DriverList::WriteAllToConsole() const
{
	for (int i = 0; i < current; i++) {
		drivers[i].WriteToConsole();
	}
}

void DriverList::WriteDriverWithMostExperience() const
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
	drivers[imax].WriteToConsole();
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
	DriverList::GetDriverByCode(code).WriteToConsole();
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

bool DriverList::isExist(Driver& driver) {
	return isCodeExist(driver.getDriverCode());
}
