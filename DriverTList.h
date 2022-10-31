#pragma once
#include "Driver.h"
#include"List.h"
#include"ADriverList.h"
namespace TempletedLists {
	class DriverList : private List<Driver> ,public ADriverList {
	public:
		DriverList();
		~DriverList();
		void Add(Driver& driver);
		void WriteAllToConsole() const;
		void WriteDriverWithMostExperience() const;
		Driver GetDriverByCode(string code);
		void WriteToConsoleDriverByDriverCode(string code);
		bool isCodeExist(string code);
		string getLastDriverCode();
		bool isExist(Driver& driver);
	};
}