#pragma once
#include <iostream>
#include <sstream>
#include "Fecha.h"
using namespace std;

class Perecedero {
private:
	Fecha* perece;
public:
	Perecedero(Fecha*);
	virtual ~Perecedero();

	string Vence();
};
