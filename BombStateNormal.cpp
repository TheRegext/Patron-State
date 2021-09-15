#include "BombStateNormal.h"
#include "IBombContext.h"

BombStateNormal::BombStateNormal(IContext& context): IState(context) {

}

void BombStateNormal::start() {
	_tics = 0;
}

void BombStateNormal::run()
{
	((IBombContext&)getContext()).addTime();

	_tics++;

	if (_tics == 10000) {
		getContext().changeState("DETENIDA");
	}
}
