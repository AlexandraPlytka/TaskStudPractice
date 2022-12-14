#include "TransportationSerializer.h"
#include<fstream>
void TransportationSerializer::ReadtransporationFromFile(Transportation*& tr, int& count)
{
	ifstream fin("C:\\Users\\masch\\source\\repos\\TemplesForTask\\transportations.txt");
	tr = new Transportation[100]; count = 0;
	int num;
	string driverCode, From, To, vname;
	while (!fin.eof())
	{
		fin >> num >> driverCode >> From >> To >> vname;
		tr[count++] = Transportation(num,driverCode,From,To,vname);
	}

	fin.close();
}

void TransportationSerializer::WriteTransportationToFile(Transportation*& tr, int count)
{
	ofstream fout("C:\\Users\\masch\\source\\repos\\TemplesForTask\\transportations.txt");

	for (int i = 0; i < count; i++)
	{
		fout << tr[i].getTranspNum() << " " << tr[i].getDriversCode() << " " << tr[i].getCityFrom() << " "<< tr[i].getCityTo()<<" " << tr[i].getVehicleName();
		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}
