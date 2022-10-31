#pragma once
#include"Vehicle.h"
#include"List.h"
#include"AVehicleList.h"

namespace TempletedLists {
	class VehicleList : private List<Vehicle>, public AVehilceList {

	public:
		VehicleList();
		~VehicleList();
		void Add(Vehicle& vehicle);
		void WriteToConsoleTheBiggestCapacity() const;
		 void WriteInfoAboutVehicleByITSName(string name);
		bool isExist(Vehicle& vehicle);
		void WriteAllToConsole() const;
		Vehicle GetVehicleByItsName(string name);
		bool isExist(string name);
		//void WriteToConsoleTheOldest();
	};
}
