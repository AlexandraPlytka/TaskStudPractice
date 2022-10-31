#pragma once
#include"Car.h"
#include"ACarList.h"
#include"List.h"

namespace TempletedLists {
	class CarList : private List<Car>, public ACarList {
	public:
		CarList();
		~CarList();
		void Add(Car& car);
		void WriteToConsoleMostPassangers() const;
		bool isExist(Car& car);
		void WriteAllToConsole() const;
	};
}
