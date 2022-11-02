#include"CarSerializer.h"
#include<iostream>
#include<fstream>

void CarSerializer::ReadCarsFromFile(Car**& cars, int& count)
{
	ifstream fin("C:\\Users\\masch\\source\\repos\\TemplesForTask\\cars.txt");
	cars = new Car * [100]; count = 0;

	string name, model;
	int year;
	int capacity, capacityPassangers;
	while (!fin.eof())
	{
		fin >> name >> model >> year >> capacity >> capacityPassangers;
		cars[count++] = new Car(name, model, year, capacity, capacityPassangers);
	}

	fin.close();
}

void CarSerializer::WriteCarsToFile(Car** cars, int count)
{
	ofstream fout("C:\\Users\\masch\\source\\repos\\TemplesForTask\\cars.txt");

	for (int i = 0; i < count; i++)
	{
		fout << cars[i]->getName() << " " << cars[i]->getModel() << " " << cars[i]->getYear() << " " << cars[i]->getCapacity() <<" " << cars[i]->getPassangers();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}



void CarSerializer::ReadCarsFromFile(Car*& cars, int& count)
{
	ifstream fin("C:\\Users\\masch\\source\\repos\\TemplesForTask\\cars.txt");
	cars = new Car  [100]; count = 0;

	string name, model;
	int year;
	int capacity, capacityPassangers;
	while (!fin.eof())
	{
		fin >> name >> model >> year >> capacity >> capacityPassangers;
		cars[count++] =  Car(name, model, year, capacity, capacityPassangers);
	}

	fin.close();
}

void CarSerializer::WriteCarsToFile(Car* cars, int count)
{
	ofstream fout("C:\\Users\\masch\\source\\repos\\TemplesForTask\\cars.txt");

	for (int i = 0; i < count; i++)
	{
		fout << cars[i].getName() << " " << cars[i].getModel() << " " << cars[i].getYear() << " " << cars[i].getCapacity() << " " << cars[i].getPassangers();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}
