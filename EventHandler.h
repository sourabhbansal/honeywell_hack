#pragma once
enum EventType
{
	Addition,
	Subtraction,
	Multiplication,
	Division
};

class EventHandler
{
public:
	EventHandler();
	~EventHandler();
	virtual bool HandleEvent();
	EventHandler* GetHandler(EventType type);
};


class SumHandler : public EventHandler
{
	bool HandleEvent() {

	}
};

class DiffHandler : public EventHandler
{
	bool HandleEvent() {

	}
};

class MulHandler : public EventHandler
{
	bool HandleEvent() {

	}
};

class DivHandler : public EventHandler
{
	bool HandleEvent() {

	}
};