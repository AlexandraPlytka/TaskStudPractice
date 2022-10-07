#pragma once
#include"Transportation.h"
class TransportationSerializer {
public:
	void ReadtransporationFromFile(Transportation*& tr, int& count);

	void WriteTransportationToFile(Transportation*& tr, int count);
};