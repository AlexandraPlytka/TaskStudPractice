#pragma once
#include"DriverList.h"
#include"DestinationList.h"
#include"TransportationList.h"
#include"VehicleList.h"

class Menu {
	DriverList dlist;
	DestinationList deslist;
	TransportationList tlist;
	VehicleList vlist;
	char userInput;
public:
	void Show();
private:
	void ShowMainTab();
	void ShowTab();
	void ShowTransportationReport();
	void AddTab();
	void PrintTab();

};