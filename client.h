#pragma once

#include "event.h"
struct operation {
	int id;
	EventType type;
	int data1;
	int data2;
};

class client
{
public:
	client();
	~client();
	int	client_request();
};








