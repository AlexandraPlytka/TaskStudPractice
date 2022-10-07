#include "TransportationList.h"
#include"TransportationSerializer.h"
#include "DestinationList.h"

TransportationList::TransportationList()
{
	TransportationSerializer link;
	link.ReadtransporationFromFile(transportations, current);
	//for (int i = 0; i < current; i++) {
	//	DestinationList dlist;
	//	Destination des(transportations[i].getCityFrom(), transportations[i].getCityTo());
	//	dlist.AddDestination(des);
	//}
}

TransportationList::~TransportationList()
{
	TransportationSerializer link;
	link.WriteTransportationToFile(transportations, current);
	delete[] transportations;
}

void TransportationList::AddTransportation(Transportation& tr)
{
	if(isExist(tr.getTranspNum())){
		throw "this transportaion (number) already exist ";
	}
	else {
		transportations[current] = tr;
		current++;
		DestinationList dlist;
		Destination des(tr.getCityFrom(), tr.getCityTo());
		dlist.AddDestination(des);
	}
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

int TransportationList::getlastTransportationNum()
{
	return transportations[current - 1].getTranspNum();
}
