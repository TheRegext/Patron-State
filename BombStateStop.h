#pragma once
#include "IState.h"
class BombStateStop :
    public IState
{
    int _tics = 0;
public:

    BombStateStop(IContext&);
    void start() override;
    void run() override;
};

