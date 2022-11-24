#include"Driver.h"
#include"DriverList.h"
#include <iostream>
#include"DriverValidate.h"

using namespace InheritanceLists;
Driver::Driver(string driverCode ,string name, string lastName, int experience)
{
	auto validator = new CodeValidate(driverCode);
	validator->setNext(new NameValidate(name))
		->setNext(new LastNameValidate(lastName))
		->setNext(new ExperienceValidate(experience));
	if (!validator)
		throw "error";
	this->driverCode = driverCode;
	this->name = name;
	this->lastName = lastName;
	this->experience = experience;
}

//Driver::Driver(string driverCode, string name, string lastName)
//: driverCode(driverCode),name(name), lastName(lastName){
//	experience = 0;
//}

string Driver::getDriverCode()
{
	return driverCode;
}

string Driver::getName()
{
	return name;
}

string Driver::getLastName()
{
	return lastName;
}

int Driver::getExperience() {
	return experience;
}

void Driver::WriteToConsole()
{
	cout << driverCode<<" " << name << " " << lastName << " " << experience << endl;
}

ostream& operator<<(ostream& out, const Driver& c)
{
	out << c.driverCode << " " << c.name << " " << c.lastName << " " << c.experience << endl;
	return out;
}

istream& operator>>(istream& in, Driver& c)
{
	cout << "Driver code: ";
	in >> c.driverCode;
	DriverList dlist;
	if (dlist.isCodeExist(c.driverCode)) {
		cout << "this driver code already exist, enter another " << endl;
		cout << "last drivers code was -- " << dlist.getLastDriverCode() << endl;
		cout << "driverCode: ";
		cin >> c.driverCode;
	}
	cout << "Name: ";
	in >> c.name;
	cout << "Last name: ";
	in >> c.lastName;
	cout << "Experience: ";
	in >> c.experience;

	auto validator = new CodeValidate(c.driverCode);
	validator->setNext(new NameValidate(c.name))
		->setNext(new LastNameValidate(c.lastName))
		->setNext(new ExperienceValidate(c.experience));
	if (!validator)
		throw "error";
	return in;
}
