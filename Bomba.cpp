#include <iostream>
#include "Bomba.h"
#include "BombStateNormal.h"
#include "BombStateStop.h"

Bomba::Bomba() {
	_time = 0;

	addState("DETENIDA", new BombStateStop(* this));
	addState("ENCENDIDA", new BombStateNormal(*this));

	changeState("ENCENDIDA");
}

void Bomba::addTime() {
	_time++;
}

int Bomba::getTime() {
	
	return _time;
}

void Bomba::update() {
	getCurrentState()->run();
}

void Bomba::mostrar() {
	std::cout << "Tiempo: " << _time << std::endl;
}