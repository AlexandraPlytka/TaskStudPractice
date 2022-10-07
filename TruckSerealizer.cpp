#include"TruckSerealizer.h"
#include<iostream>
#include<fstream>

void TruckSerializer::ReadTrucksFromFile(Truck*& trucks, int& count)
{
	ifstream fin("trucks.txt");
	trucks = new Truck[100]; count = 0;

	string name, model;
	int year;
	int capacity, passangers;
	while (!fin.eof())
	{
		fin >> name >> model >> year >> capacity >> passangers;
		trucks[count++] = Truck(name, model, year, capacity, passangers);
	}

	fin.close();
}

void TruckSerializer::WriteTrucksToFile(Truck* trucks, int count)
{
	ofstream fout("vehicles.txt");

	for (int i = 0; i < count; i++)
	{
		fout << trucks[i].getName() << " " << trucks[i].getModel() << " " << trucks[i].getYear() << " " << trucks[i].getCapacity() << trucks[i].getLenght();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}
