#pragma once
#include "Driver.h"
class DriverSerializer {
public:
	void ReadDriversFromFile(Driver*& drivers, int& count);
	void WriteDriversToFile(Driver* drivers, int count);
};