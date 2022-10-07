#pragma once
#include "Driver.h"
class DriverList {
	Driver* drivers;
	int current;
public:
	DriverList();
	~DriverList();
	void AddDriver(Driver& driver);
	void WriteToConsole();
	void WriteDriverWithMostExperience();
	Driver GetDriverByCode(string code);
	void WriteToConsoleDriverByDriverCode(string code);
	bool isCodeExist(string code);
	string getLastDriverCode();
};