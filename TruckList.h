#pragma once
#include"VehicleList.h"
#include"Trucks.h"
#include"ATruckList.h"

namespace InheritanceLists {
	class TruckList : private BaseVehicleList , public ATruckList {
	public:
		TruckList();
		~TruckList();
		void Add(Truck& truck);
		void writeLongestTruck() const;
		bool isExist(Truck& truck);
		void WriteAllToConsole() const;
	};
}