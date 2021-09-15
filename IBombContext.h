#pragma once
#include "IContext.h"
class IBombContext: public IContext {
public:
	virtual void addTime()=0;
};