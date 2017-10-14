#ifndef __EVENTHANDLERSTR_H__
#define __EVENTHANDLERSTR_H__

#include "EventHandler.h"
#include <memory>

namespace reactor {

	class EventHandler;
	
	using EventHandlerStr = std::shared_ptr<EventHandler>;

} 

#endif
