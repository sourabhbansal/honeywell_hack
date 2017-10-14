#include "stdafx.h"
#include "EventHandler.h"


EventHandler::EventHandler()
{
}


EventHandler::~EventHandler()
{
}

EventHandler* EventHandler::GetHandler(EventType type) {
	if (type == 0) {
		return new SumHandler();
	} else if (type == 1) {
		return new DiffHandler();
	} else if(type == 2) {
		return new SumHandler();
	}else if (type == 3) {
			return new SumHandler();
	} else {
		return NULL;
	}
}
void EventHandler::HandleEvent() {

}