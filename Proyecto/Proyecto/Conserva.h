#pragma once
#include "Producto.h"

class Conserva : public Producto {
private:
	bool envasado;
public:
	Conserva(string, string, string, double, int, int, Fecha*, bool);

	void setEnvasado(bool);
	bool getEnvasado();

	string toString();

};