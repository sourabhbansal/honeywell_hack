#include "stdafx.h"
#include "client.h"

#define MAX 10

client::client()
{
}


client::~client()
{
}

int client::client_request()
{
	struct operation opr;
	int i;
	for (i = 0; i < 10; i++)
	{
		opr.id = rand()%MAX;
		opr.type = opr.id % 4;
		opr.data1 = i + 1;
		opr.data2 = i + 3;
	//	XYZ(opr);
	}
}