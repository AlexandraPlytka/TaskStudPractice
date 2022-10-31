#pragma once
#include"Transportation.h"
#include"List.h"
#include"ATranspotationList.h"

namespace TempletedLists {
	class TransportationList:private List<Transportation>, public ATransportationList{
	public:
		TransportationList();
		~TransportationList();
		void Add(Transportation& tr);
		void WriteAllToConsole() const;
		void WriteToConsoleSimplify();
		void WriteToConsoleALLINFO();
		void WriteLatesTransportation();
		bool isExist(int n);
		bool isExist(Transportation& transportation);
		int getlastTransportationNum();
	};
}