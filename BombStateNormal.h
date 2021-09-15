#pragma once
#include "IState.h"
#include "IBombContext.h"
class BombStateNormal: public IState
{
protected:
	int _tics = 0;
public:
	BombStateNormal(IContext&);
	void start() override;
	void run() override;
};

