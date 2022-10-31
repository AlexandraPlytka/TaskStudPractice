#pragma once
#include"Destination.h"

class DestinationSerializer {
public:
	static void ReadDestinationsFromFile(Destination*& dest, int& count);
	static void WriteDestinationsToFile(Destination* dest, int count);
};