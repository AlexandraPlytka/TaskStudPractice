#pragma once
#include"Vehicle.h"
#include"AList.h"

class AVehilceList : public AList<Vehicle> {
public :
	virtual void WriteToConsoleTheBiggestCapacity() const = 0;
	virtual void WriteInfoAboutVehicleByITSName(string name) = 0;
	virtual Vehicle GetVehicleByItsName(string name) = 0;
	virtual bool isExist(string name) = 0;
	virtual ~AVehilceList(){}
}; 