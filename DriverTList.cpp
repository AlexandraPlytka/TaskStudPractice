#include "DriverTList.h"
#include"DriverSerializer.h"
#include <iostream>

using namespace TempletedLists;

DriverList::DriverList()
{
	DriverSerializer::ReadDriversFromFile(items, current);
	
}

DriverList::~DriverList()
{
	DriverSerializer::WriteDriversToFile(items, current);
}

void DriverList::Add(Driver& driver)
{
	List<Driver>::Add(driver);
	DriverSerializer::WriteDriversToFile(items, current);
	DriverSerializer::WriteDriversToFile(items, current);
}

void DriverList::WriteAllToConsole() const
{
	List<Driver>::WriteAllToConsole();
}

void DriverList::WriteDriverWithMostExperience() const
{
	int max = items[0].getExperience();
	int imax = 0;
	for (int i = 0; i < current; i++)
	{
		if (items[i].getExperience() > max)
		{
			max = items[i].getExperience();
			imax = i;
		}

	}
	items[imax].WriteToConsole();
}

bool TempletedLists::DriverList::isExist(Driver& driver)
{
	for (int i = 0; i < current; i++) {
		if (driver.getDriverCode() == items[i].getDriverCode())
			return true;
	}
	return false;
}

Driver DriverList::GetDriverByCode(string code) {
	if (isCodeExist(code)) {
		for (int i = 0; i < current; i++) {
			if (items[i].getDriverCode() == code) {
				return items[i];
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
		if (code == items[i].getDriverCode()) {
			return true;
		}
	}
	return false;
}

string DriverList::getLastDriverCode()
{
	return items[current - 1].getDriverCode();
}

