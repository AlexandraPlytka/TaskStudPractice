#include "TransportationTList.h"
#include"TransportationSerializer.h"
#include "DestinationTList.h"
using namespace TempletedLists;

TransportationList::TransportationList()
{
	TransportationSerializer::ReadtransporationFromFile(items, current);
}

TransportationList::~TransportationList()
{
	TransportationSerializer::WriteTransportationToFile(items, current);
}

void TransportationList::Add(Transportation& tr)
{
	if (isExist(tr.getTranspNum())) {
		throw "this transportaion (number) already exist ";
	}
	else {
		List<Transportation>::Add(tr);
		TempletedLists::DestinationList dlist;
		Destination des(tr.getCityFrom(), tr.getCityTo());
		dlist.Add(des);
	}
	TransportationSerializer::WriteTransportationToFile(items, current);
}

void TempletedLists::TransportationList::WriteAllToConsole() const
{
	List<Transportation>::WriteAllToConsole();
}

bool TempletedLists::TransportationList::isExist(Transportation& transportation)
{
	return isExist(transportation.getTranspNum());
}

void TransportationList::WriteToConsoleSimplify()
{
	for (int i = 0; i < current; i++) {
		items[i].WriteSimplifyToConsole();
	}
}

void TransportationList::WriteToConsoleALLINFO()
{
	for (int i = 0; i < current; i++) {
		items[i].WriteALLInfoAboutTransportationToConsole();
	}
}

void TransportationList::WriteLatesTransportation()
{
	items[current - 1].WriteSimplifyToConsole();
}

bool TransportationList::isExist(int n)
{
	for (int i = 0; i < current; i++) {
		if (items[i].getTranspNum() == n)
			return true;
	}
	return false;
}

int TransportationList::getlastTransportationNum()
{
	return items[current - 1].getTranspNum();
}
