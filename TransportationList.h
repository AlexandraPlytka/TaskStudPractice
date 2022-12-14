#pragma once
#include "Transportation.h"
#include"ATranspotationList.h"

namespace InheritanceLists {
	class TransportationList: public ATransportationList {
		Transportation* transportations;
		int current;
	public:
		TransportationList();
		~TransportationList();
		void Add(Transportation& tr);
		void WriteAllToConsole()const;
		void WriteToConsoleSimplify();
		void WriteToConsoleALLINFO();
		void WriteLatesTransportation();
		bool isExist(int n);
		bool isExist(Transportation& transportation);
		int getlastTransportationNum();
	};
}