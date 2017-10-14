#ifndef __REACTORINTERFACE_H__
#define __REACTORINTERFACE_H__

#include <map>
#include <list>

#include "EventHandlerStr.h"
#include "EventType.h"

namespace reactor {

	class ReactorInterface {
	public:
		
		void registerEventHandler(int iFd,
			const EventHandlerStr& iHandler);

		void getEventHandlerFor(int iFd,
			std::list<EventHandlerStr>& oHandlers) const;
		ReactorInterface(int _cID, EventType _eType);

		/* virtual bool unregisterEventHandler(const EventHandlerPtr& iHandler); */

	protected:
		virtual void run(int _cID, EventType _eType) ;

		

	private:
		std::map<int, std::list<EventHandlerStr>> _events;
	};

} 
#endif
