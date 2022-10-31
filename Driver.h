#pragma once
#include <string>
using namespace std;
class Driver {
	int experience;
	string driverCode;
	string name;
	string lastName;
public:
	Driver(string driverCode = "", string name = "", string lastName = "", int experience = 0);
	//Driver(string driverCode = "", string name = "", string lastName = "");
	string getDriverCode();
	string getName();
	string getLastName();
	int getExperience();
	void WriteToConsole();
	friend ostream& operator << (ostream& out, const Driver& c);
	friend istream& operator >> (istream& in, Driver& c);
};