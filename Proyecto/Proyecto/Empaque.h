#pragma once
#include "Carne.h"

class Empaque {
private:
	bool tripa;
public:
	Empaque(bool);
	virtual ~Empaque();

	void setTripa(bool);
	bool getTripa();

	string esTripa();

};