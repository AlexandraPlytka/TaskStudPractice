#pragma once
#include"Destination.h"

class DestinationSerializer {
public:
	void ReadDestinationsFromFile(Destination*& dest, int& count);
	void WriteDestinationsToFile(Destination* dest, int count);
};