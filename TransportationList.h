#pragma once
#include "Transportation.h"

class TransportationList {
	Transportation* transportations;
	int current;
public:
	TransportationList();
	~TransportationList();
	void AddTransportation(Transportation& tr);
	void WriteToConsoleSimplify();
	void WriteToConsoleALLINFO();
	void WriteLatesTransportation();
	bool isExist(int n);
	int getlastTransportationNum();
};