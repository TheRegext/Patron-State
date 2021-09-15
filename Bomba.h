#pragma once
#include "IBombContext.h"

class Bomba: public IBombContext
{
	int _time;

public:
	Bomba();

	void addTime();

	int getTime();

	void update();

	void mostrar();
};

