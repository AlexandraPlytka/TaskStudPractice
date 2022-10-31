#pragma once
#include"Vehicle.h"
#include"BaseVehicleList.h"
#include"AVehicleList.h"

namespace InheritanceLists {
	class VehicleList : private BaseVehicleList, public AVehilceList {
	public:
		VehicleList();
		~VehicleList();
		void Add(Vehicle& vehicle);
		void WriteToConsoleTheBiggestCapacity() const;
		 void WriteInfoAboutVehicleByITSName(string name);
		 bool isExist(Vehicle& vehicle);
		 void WriteAllToConsole()const;
		 Vehicle GetVehicleByItsName(string name);
		 bool isExist(string name);
	};
}