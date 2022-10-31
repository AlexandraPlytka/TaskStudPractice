#pragma once
#include "Driver.h"
class DriverSerializer {
public:
	static void ReadDriversFromFile(Driver*& drivers, int& count);
	static void WriteDriversToFile(Driver* drivers, int count);
};