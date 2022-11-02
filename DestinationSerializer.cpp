#include "DestinationSerializer.h"
#include<fstream>
void DestinationSerializer::ReadDestinationsFromFile(Destination*& dest, int& count)
{
	ifstream fin("C:\\Users\\masch\\source\\repos\\TemplesForTask\\destinations.txt");
	dest = new Destination[100]; count = 0;
	string From, To;
	while (!fin.eof())
	{
		fin >> From >> To;
		dest[count++] = Destination(From, To);
	}

	fin.close();
}

void DestinationSerializer::WriteDestinationsToFile(Destination* dest, int count)
{
	ofstream fout("C:\\Users\\masch\\source\\repos\\TemplesForTask\\destinations.txt");

	for (int i = 0; i < count; i++)
	{
		fout << dest[i].getCityFrom() << " " << dest[i].getCityTo();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();

}

