#include <map>
#include <list>
#include <algorithm>
#include <iterator>

#include "EventHandlerStr.h"
#include "ReactorInterface.h"

namespace reactor {

	void ReactorInterface::run(int _cID, EventType _eType)
	{
		this->run(_cID,_eType);
	}
	


	void ReactorInterface::registerEventHandler(
		int Cid,
		const EventHandlerStr& iHandler) {
		// TODO: Need a mutex here
		auto aSearch = _events.find(Cid);
		if (aSearch == _events.end()) {
			std::list<EventHandlerStr> aHandlerList{ iHandler };
			_events[Cid] = aHandlerList;
		}
		else {
			aSearch->second.push_back(iHandler);
		}
	}


	void ReactorInterface::getEventHandlerFor(
		int Cid,
		std::list<EventHandlerStr>& oHandlers) const {
		// TODO put a mutex here
		auto aSearch = _events.find(Cid);
		if (aSearch != _events.end()) {
			std::copy(aSearch->second.cbegin(),
				aSearch->second.cend(),
				std::back_inserter(oHandlers));
		}
	}

} 
