#include"Driver.h"
#include "DriverSerializer.h"
#include<fstream>

void DriverSerializer::ReadDriversFromFile(Driver*& drivers, int& count)
{
	ifstream fin("drivers.txt");
	drivers = new Driver[100]; count = 0;

	string driverCode,name, lastName;
	int experience;
	while (!fin.eof())
	{
		fin >> driverCode>> name >> lastName >> experience;
		drivers[count++] = Driver(driverCode,name, lastName, experience);
	}

	fin.close();
}

void DriverSerializer::WriteDriversToFile(Driver* drivers, int count)
{
	ofstream fout("drivers.txt");

	for (int i = 0; i < count; i++)
	{
		fout << drivers[i].getDriverCode() << " " << drivers[i].getName() << " " << drivers[i].getLastName() << " " << drivers[i].getExperience();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();

}
