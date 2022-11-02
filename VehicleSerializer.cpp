#include "VehicleSerializer.h"
#include<fstream>

void VehicleSerializer::ReadVehiclesFromFile(Vehicle**& vehicles, int& count)
{
	ifstream fin("C:\\Users\\masch\\source\\repos\\TemplesForTask\\vehicles.txt");
	vehicles = new Vehicle*[100]; count = 0;

	string name, model;
	int year;
	int capacity;
	while (!fin.eof())
	{
		fin >> name >> model >> year >> capacity;
		vehicles[count++] = new Vehicle(name, model, year, capacity);
	}

	fin.close();
}

void VehicleSerializer::WriteVehiclesToFile(Vehicle** vehicles, int count)
{
	ofstream fout("C:\\Users\\masch\\source\\repos\\TemplesForTask\\vehicles.txt");

	for (int i = 0; i < count; i++)
	{
		fout << vehicles[i]->getName() << " " << vehicles[i]->getModel() << " " << vehicles[i]->getYear() <<" " << vehicles[i]->getCapacity();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}


void VehicleSerializer::ReadVehiclesFromFile(Vehicle*& vehicles, int& count)
{
	ifstream fin("C:\\Users\\masch\\source\\repos\\TemplesForTask\\vehicles.txt");
	vehicles = new Vehicle [100]; count = 0;

	string name, model;
	int year;
	int capacity;
	while (!fin.eof())
	{
		fin >> name >> model >> year >> capacity;
		vehicles[count++] = Vehicle(name, model, year, capacity);
	}

	fin.close();
}

void VehicleSerializer::WriteVehiclesToFile(Vehicle* vehicles, int count)
{
	ofstream fout("C:\\Users\\masch\\source\\repos\\TemplesForTask\\vehicles.txt");

	for (int i = 0; i < count; i++)
	{
		fout << vehicles[i].getName() << " " << vehicles[i].getModel() << " " << vehicles[i].getYear() << " " << vehicles[i].getCapacity();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}
