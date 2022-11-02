#include "TransportationList.h"
#include"TransportationSerializer.h"
#include "DestinationList.h"
using namespace InheritanceLists;

TransportationList::TransportationList()
{
	TransportationSerializer :: ReadtransporationFromFile(transportations, current);
}

TransportationList::~TransportationList()
{
//	TransportationSerializer ::WriteTransportationToFile(transportations, current);
	delete[] transportations;
}

void TransportationList::Add(Transportation& tr)
{
	if(isExist(tr.getTranspNum())){
		throw "this transportaion (number) already exist ";
		//throw "this transportaion (number) already exist ";
	}
	else {
		transportations[current] = tr;
		current++;
		DestinationList dlist;
		Destination des(tr.getCityFrom(), tr.getCityTo());
		dlist.Add(des);
	}
	TransportationSerializer::WriteTransportationToFile(transportations, current);

}

void TransportationList::WriteToConsoleSimplify()
{
	for (int i = 0; i < current; i++) {
		transportations[i].WriteSimplifyToConsole();
	}
}

void TransportationList::WriteToConsoleALLINFO()
{
	for (int i = 0; i < current; i++) {
		transportations[i].WriteALLInfoAboutTransportationToConsole();
	}
}

void TransportationList::WriteLatesTransportation()
{
	transportations[current - 1].WriteSimplifyToConsole();
}

bool TransportationList::isExist(int n)
{
	for (int i = 0; i < current; i++) {
		if (transportations[i].getTranspNum() == n)
			return true;
	}
	return false;
}

bool TransportationList::isExist(Transportation& transportation)
{
	for (int i = 0; i < current; i++) {
		if (transportations[i].getTranspNum() == transportation.getTranspNum())
			return true;
	}
	return false;
}
int TransportationList::getlastTransportationNum()
{
	return transportations[current - 1].getTranspNum();
}


void TransportationList :: WriteAllToConsole()const
{
	for (int i = 0; i < current; i++) {
		transportations[i].WriteSimplifyToConsole();
	}
}