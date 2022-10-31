#pragma once
#include"Transportation.h"
class TransportationSerializer {
public:
	static void ReadtransporationFromFile(Transportation*& tr, int& count);

	static void WriteTransportationToFile(Transportation*& tr, int count);
};