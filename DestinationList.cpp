#include "DestinationList.h"
#include"DestinationSerializer.h"
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

void DestinationList::AddDestination(Destination& des)
{
	if (!isExist(des)) {
		destinations[current] = des;
		current++;
	}
}


void DestinationList::WriteToConsole()
{
	for (int i = 0; i < current; i++) {
		destinations[i].writeToConsole();
	}
}

bool DestinationList::isExist(Destination des)
{
	for (int i = 0; i < current; i++) {
		if (des.getCityFrom() == destinations[i].getCityFrom() && des.getCityTo() == destinations[i].getCityTo())
		{
			return true;
		}
	}
	return false;
}

