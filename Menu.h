#pragma once
#include"ACarList.h"
#include"ATruckList.h"
#include"AVehicleList.h"
#include"ADriverList.h"
#include"ADestinationList.h"
#include"ATranspotationList.h"

class Menu {
	ACarList* carlist;
	ATruckList* trucklist;
	AVehilceList* vehiclelist;
	ADriverList* driverlist;
	ADestinationList* destinationlist;
	ATransportationList* transportationlist;

	char userInput;
public:
	void Show();
	Menu();
	~Menu();
private:
	void ShowMainTab();
	void ShowTab();
	//void ShowTransportationReport();  temporary closed 
	void AddTab();
	void PrintTab();

};