#include "stdafx.h"
#include "InitiationDispatcher.h"
#include "iostream"

using namespace std;

InitiationDispatcher::InitiationDispatcher()
{
	cout << "Constructor of InitiationDispatcher" << endl;
}


InitiationDispatcher::~InitiationDispatcher()
{
	cout << "Destructor of InitiationDispatcher" << endl;
}


bool InitiationDispatcher::RegisterHandlers(int client_Id, EventType event_type, EventHandler *hnd) {
	map<int, TypeHandlerMap>::iterator it = clientEventMap.find(client_Id);
	TypeHandlerMap type_hnd_map;
	type_hnd_map.type = event_type;
	type_hnd_map.hnd = eventHandler.GetHandler(event_type);

	if (it == clientEventMap.end()) {
		cout << "RegisterHandlers" << endl;
		clientEventMap.insert(pair<int, TypeHandlerMap>(client_Id, type_hnd_map));
	}
	else {
		cout << "Client ID is already Registered" << endl;
		return true;
	}
}

void InitiationDispatcher::UnRegisterHandlers(int client_Id, EventType event_type) {
	cout << "UnRegisterHandlers" << endl;
	for (map<int, TypeHandlerMap>::iterator it = clientEventMap.begin(); it != clientEventMap.end(); ++it) {
		if (clientEventMap.find(client_Id)!= clientEventMap.end()) {
			clientEventMap.erase(it);
		}
	}
}

void InitiationDispatcher::DipatchEvent(int client_Id, EventType event_type) {
	for (map<int, TypeHandlerMap>::iterator it = clientEventMap.begin(); it != clientEventMap.end(); ++it) {
		if (it->second.hnd->HandleEvent()) {
			cout << "Handling Copleted"
		}
	}
}