#pragma once
class IContext;

class IState
{
public:
	IState(IContext& context) : _context(context) {	}
	virtual void start() {}
	virtual void run() = 0;
	virtual void end() {};
protected:
	IContext& getContext() const{
		return _context;
	}
private:
	IContext& _context;
};

