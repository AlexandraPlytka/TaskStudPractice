#pragma once
#include <string>
using namespace std;

class Vehicle {
protected:
	string model;
	int year;
	string name;
	int capacity;
public:
	Vehicle(string name = "", string model = "", int year = 2022, int capacity = 100);
	int getYear();
	int getAge();
	int getCapacity();
	string getName();
	string getModel();
	virtual void writeToConsole();
	friend ostream& operator << (ostream& out, const Vehicle& c);
	friend istream& operator >> (istream& in, Vehicle& c);
	void operator =(Vehicle c);
};