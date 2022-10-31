#include "Transportation.h"
#include "TransportationList.h"
#include"VehicleList.h"
using namespace InheritanceLists;


Transportation::Transportation(int transportationNum, string driversCode, string From, string To, string vehicleName)
{
	if (transportationNum < 0)
		throw "number cannot be negative";
	this->transportationNumber = transportationNum;
	this->driverCode = driversCode;
	this->destinationFrom = From;
	this->destinationTO = To;
	this->vehicle = vehicleName;
}

int Transportation::getTranspNum()
{
	return transportationNumber;
}

string Transportation::getDriversCode()
{
	return driverCode;
}



void Transportation::WriteALLInfoAboutTransportationToConsole()
{
	cout << "All information about transportation" << endl;
	cout <<"Number: "<< transportationNumber;
	cout << "\nDriver: ";
	DriverList dlist;
	(dlist.GetDriverByCode(driverCode)).WriteToConsole();
	cout << "Destination: ";
	Destination destination(destinationFrom, destinationTO);
	destination.WriteToConsole();
	VehicleList vlist;
	Vehicle veh = vlist.GetVehicleByItsName(vehicle);
	cout << "Vehicle: ";
	//vlist.GetVehicleByItsName(vehicle).writeToConsole();
	veh.WriteToConsole();
	cout << endl;
}



string Transportation::getVehicleName()
{
	return vehicle;
}

void Transportation::WriteSimplifyToConsole()
{
	cout << transportationNumber << " " << driverCode << " " << destinationFrom<< " " << destinationTO<< " " << vehicle << endl;
}

void Transportation::WriteToConsole()
{
	WriteSimplifyToConsole();
}

string Transportation::getCityFrom()
{
	return destinationFrom;
}

string Transportation::getCityTo()
{
	return destinationTO;
}

void Transportation::operator=(Transportation c)
{
	transportationNumber = c.transportationNumber;
	driverCode = c.driverCode;
	destinationFrom = c.destinationFrom;
	destinationTO = c.destinationTO;
	vehicle = c.vehicle;
}

ostream& operator<<(ostream& out, const Transportation& c)
{
	out << c.transportationNumber << " " << c.driverCode << " " << c.destinationFrom << " " << c.destinationTO << " " << c.vehicle << endl;
	return out;
}

istream& operator>>(istream& in, Transportation& c)
{
	TransportationList tlist;
	cout << "Transportation number: ";
	in >> c.transportationNumber;
	if (tlist.isExist(c.transportationNumber)) {
		cout << "this thransportation num already exist " << endl;
		cout << " last transp. num was :";
		cout << tlist.getlastTransportationNum() << endl;
		cout << "enter transportation number :" << endl;
		cin >> c.transportationNumber;
	}
	cout << "Drivers code: ";
	in >> c.driverCode;
	cout << "City from: ";
	in >> c.destinationFrom;
	cout << "City to: ";
	in >> c.destinationTO;
	cout << "Vehicle name: ";
	in >> c.vehicle;
	VehicleList vlist;
	if (!(vlist.isExist(c.vehicle) )){
		cout << "\nsuch vehicle do not exist try enter another vehiche name " << endl;
		cout << "\nWe have this vehicles:" << endl;
		VehicleList vlist;
		vlist.WriteAllToConsole();
		cout << "\n enter name from list" << endl;
		cin >> c.vehicle;
	}
	return in;
}

