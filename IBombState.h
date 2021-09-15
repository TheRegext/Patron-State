#pragma once

class IBombState {
protected:
public:
	virtual void start() {};
	virtual void run() = 0;
	virtual void end() {};
};
