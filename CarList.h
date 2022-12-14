#pragma once
#include"BaseVehicleList.h"
#include"Car.h"
#include"ACarList.h"

namespace InheritanceLists {
	class CarList : private BaseVehicleList , public ACarList {
	public:
		CarList();
		~CarList();
		void Add(Car& car);
		void WriteToConsoleMostPassangers() const;
		void WriteAllToConsole()const;
		bool isExist(Car& car);
	};

}