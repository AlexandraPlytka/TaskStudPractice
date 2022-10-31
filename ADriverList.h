#pragma once
#include"AList.h"
#include"Driver.h"

class ADriverList: public AList<Driver> {
	
public:
	virtual	void WriteDriverWithMostExperience() const = 0;
	virtual Driver GetDriverByCode(string code) = 0;
	virtual void WriteToConsoleDriverByDriverCode(string code) = 0;
	virtual bool isCodeExist(string code) = 0;
	virtual string getLastDriverCode() = 0;
	virtual ~ADriverList() {}
};