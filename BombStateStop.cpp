#include "IBombContext.h"
#include "BombStateStop.h"

BombStateStop::BombStateStop(IContext& context) : IState(context) {
}

void BombStateStop::start() {
	_tics = 0;
}

void BombStateStop::run()
{
	_tics++;

	if (_tics == 10000) {
		getContext().changeState("ENCENDIDA");
	}
}
