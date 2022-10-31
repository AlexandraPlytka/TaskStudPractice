#pragma once
#include"Trucks.h"
#include"AList.h"

class ATruckList : public AList<Truck> {
public:
	virtual void writeLongestTruck() const = 0;
	virtual ~ATruckList() {}
};