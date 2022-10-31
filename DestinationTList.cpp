#include "DestinationTList.h"
#include"DestinationSerializer.h"

using namespace TempletedLists;
DestinationList::DestinationList()
{
	DestinationSerializer::ReadDestinationsFromFile(items, current);
}

DestinationList::~DestinationList()
{
	DestinationSerializer ::WriteDestinationsToFile(items, current);
}

void DestinationList::Add(Destination& des)
{
	if (!isExist(des)) {
		List<Destination>::Add(des);
	}
}


void DestinationList::WriteAllToConsole() const
{
	List<Destination>::WriteAllToConsole();
}

bool DestinationList::isExist(Destination& des)
{
	for (int i = 0; i < current; i++) {
		if (des.getCityFrom() == items[i].getCityFrom() && des.getCityTo() == items[i].getCityTo())
		{
			return true;
		}
	}
	return false;
}

