#pragma once
#include "Driver.h"
#include"ADriverList.h"
namespace InheritanceLists {
	class DriverList : public ADriverList {
		Driver* drivers;
		int current;
	public:
		DriverList();
		~DriverList();
		void Add(Driver& driver);
		void WriteAllToConsole()const;
		void WriteDriverWithMostExperience() const;
		Driver GetDriverByCode(string code);
		void WriteToConsoleDriverByDriverCode(string code);
		bool isCodeExist(string code);
		string getLastDriverCode();
		bool isExist(Driver& driver);
	};
}