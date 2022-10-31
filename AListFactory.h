#pragma once
#include"ACarList.h"
#include"ATruckList.h"
#include"AVehicleList.h"
#include"ADestinationList.h"
#include"ADriverList.h"
#include"ATranspotationList.h"

#include"DriverList.h"
#include"DestinationList.h"
#include"TransportationList.h"
#include"VehicleList.h"
#include"CarList.h"
#include"TruckList.h"

#include"DriverTList.h"
#include"DestinationTList.h"
#include"TransportationTList.h"
#include"VehicleTList.h"
#include"CarTList.h"
#include"TruckTList.h"

class AListFactory {
public:
	virtual AVehilceList* GetVehicleList() = 0;
	virtual ACarList* GetCarList() = 0;
	virtual ATruckList* GetTruckList() = 0;
	virtual ADriverList* GetDriverList() = 0;
	virtual ADestinationList* GetDestinationList() = 0;
	virtual ATransportationList* GetTransportationList() = 0;	
};

class InheritanceListFactory:public AListFactory {
public:
	ACarList* GetCarList() {
		return new InheritanceLists::CarList; 
	}

	ATruckList* GetTruckList() {
		return new InheritanceLists::TruckList;
	}
	AVehilceList* GetVehicleList() {
		return new InheritanceLists::VehicleList;
	}

	ADriverList* GetDriverList() {
		return new InheritanceLists::DriverList;
		
	}
	ADestinationList* GetDestinationList() {
		return new InheritanceLists::DestinationList ;
	}
	ATransportationList* GetTransportationList() {
		return new InheritanceLists::TransportationList;
	}
};

class TempletedListFactory :public AListFactory {
public:
	ACarList* GetCarList() {
		return new TempletedLists::CarList;
	}
	ATruckList* GetTruckList() {
		return new TempletedLists::TruckList;
	}
	ATransportationList* GetTransportationList() {
		return new TempletedLists::TransportationList;
	}
	AVehilceList* GetVehicleList() {
		return new TempletedLists::VehicleList;
	}
	ADriverList* GetDriverList() {
		return new TempletedLists::DriverList;
	}
	ADestinationList* GetDestinationList() {
		return new	TempletedLists::DestinationList;
	}
};

class ListFactoryProvider {
public:
	AListFactory* GetListFactory() {
		return new TempletedListFactory();
		//return new InheritanceListFactory();
	}
};