#pragma once
#include"Transportation.h"
#include"AList.h"

class ATransportationList :public AList<Transportation> {
public:
	
	//void WriteToConsoleALLINFO();
	virtual void WriteLatesTransportation() = 0;
	virtual bool isExist(int n) = 0;
	virtual int getlastTransportationNum() = 0;
	virtual ~ATransportationList(){}
};