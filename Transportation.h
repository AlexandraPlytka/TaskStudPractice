#pragma once
#include <string>
#include"Destination.h"
#include "VehicleList.h"
#include"DriverList.h"
using namespace std;

class Transportation {
	int transportationNumber;
	string driverCode;
	string destinationFrom;
	string destinationTO;
	string vehicle;
public:
	Transportation(int transportationNum = 0, string driversCode = "", string From = "", string To = "", string vehicleName = "");
	void WriteALLInfoAboutTransportationToConsole();
	int getTranspNum();
	string getDriversCode();
	string getVehicleName();
	void WriteSimplifyToConsole();
	void WriteToConsole();
	string getCityFrom();
	string getCityTo();
	friend ostream& operator << (ostream& out, const Transportation& c);
	friend istream& operator >> (istream& in, Transportation& c);
	void operator = (Transportation c);
};