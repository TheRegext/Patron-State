#pragma once
#include <string>
#include <map>
#include "IState.h"

class IContext {
private:
	std::map<std::string, IState*> _states;
	IState* _currentState = nullptr;
protected:
	void addState(std::string stateName, IState* pState) {
		_states.insert({ stateName, pState });
	}

	IState* getCurrentState() const {
		return _currentState;
	}

public:
	void changeState(std::string stateName) {
		if (_currentState != nullptr) {
			_currentState->end();
		}
		_currentState = _states[stateName];

		_currentState->start();
	}
};
