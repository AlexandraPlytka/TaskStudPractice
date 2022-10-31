#pragma once
#include"Vehicle.h"


class BaseVehicleList
{
protected:
	Vehicle** basevehicles;
	int current;
	void Add(Vehicle* vehicle);
	
public:
	BaseVehicleList();
	~BaseVehicleList();
	bool isExist(string vehiclename);
	void WriteAllToConsole() const;
	Vehicle GetVehicleByItsName(string name);
	void WriteInfoAboutVehicleByITSName(string name);
	virtual void WriteToConsoleTheOldest();
};
