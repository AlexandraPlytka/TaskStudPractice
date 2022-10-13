#pragma once
#include"DriverList.h"
#include"DestinationList.h"
#include"TransportationList.h"
#include"VehicleList.h"
#include"CarList.h"
#include"TruckList.h"

class Menu {
	DriverList dlist;
	DestinationList deslist;
	TransportationList tlist;
	VehicleList vlist;
	CarList carlist;
	TruckList trucklist;
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