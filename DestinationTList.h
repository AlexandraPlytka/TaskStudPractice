#pragma once
#include"Destination.h"
#include"List.h"
#include"ADestinationList.h"

namespace TempletedLists {

	class DestinationList : private List<Destination>,public ADestinationList {
	
	public:
		DestinationList();
		~DestinationList();
		void Add(Destination& des);
		void WriteAllToConsole() const;
		bool isExist(Destination& des);
	};
}