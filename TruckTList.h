#pragma once
#include"Trucks.h"
#include"List.h"
#include"ATruckList.h"

namespace TempletedLists {
	class TruckList : private List<Truck>, public ATruckList {
	public:
		TruckList();
		~TruckList();
		void Add(Truck& truck);
		void writeLongestTruck() const;
		bool isExist(Truck& truck);
		void WriteAllToConsole() const;
	};
}
