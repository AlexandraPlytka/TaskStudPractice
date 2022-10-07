#pragma once
#include"Destination.h"

class DestinationList {
	Destination* destinations;
	int current;
public:
	DestinationList();
	~DestinationList();
	void AddDestination(Destination& des);
	void WriteToConsole();
	bool isExist(Destination des);
};