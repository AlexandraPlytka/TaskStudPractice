#pragma once
#include"Destination.h"
#include"ADestinationList.h"

namespace InheritanceLists {
	class DestinationList : public ADestinationList {
		Destination* destinations;
		int current;
	public:
		DestinationList();
		~DestinationList();
		void Add(Destination& des);
		void WriteAllToConsole()const;
		bool isExist(Destination& des);
	};
}