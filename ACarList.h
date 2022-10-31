#pragma once
#include"Car.h"
#include"AList.h"

class ACarList : public AList<Car> {
public:
	virtual void WriteToConsoleMostPassangers() const = 0;
	virtual ~ACarList() {}
};