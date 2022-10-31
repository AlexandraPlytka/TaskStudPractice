#include "DestinationList.h"
#include"DestinationSerializer.h"

using namespace InheritanceLists;

DestinationList::DestinationList()
{
	DestinationSerializer link;
	link.ReadDestinationsFromFile(destinations, current);
}

DestinationList::~DestinationList()
{
	DestinationSerializer link;
	link.WriteDestinationsToFile(destinations, current);
	delete[] destinations;
}

void DestinationList::Add(Destination& des)
{
	if (!isExist(des)) {
		destinations[current] = des;
		current++;
	}
}


void DestinationList::WriteAllToConsole() const
{
	for (int i = 0; i < current; i++) {
		destinations[i].WriteToConsole();
	}
}

bool DestinationList::isExist(Destination& des)
{
	for (int i = 0; i < current; i++) {
		if (des.getCityFrom() == destinations[i].getCityFrom() && des.getCityTo() == destinations[i].getCityTo())
		{
			return true;
		}
	}
	return false;
}

