#pragma once
#include "EventHandler.h"
#include "Client.h"
#include "map"
//#include 
enum EventType
{
	Addition,
	Subtraction,
	Multiplication,
	Division
};

struct TypeHandlerMap{
	EventType type;
	EventHandler* hnd;
};


class InitiationDispatcher
{
public:
	InitiationDispatcher();
	~InitiationDispatcher();
	bool RegisterHandlers(int client_Id,  EventType event_type, EventHandler *hnd);
	void UnRegisterHandlers(int client_Id,  EventType event_type);
	void DipatchEvent(int client_Id, EventType event_type);
	map<int, TypeHandlerMap> clientEventMap;
	EventHandler eventHandler;
};

