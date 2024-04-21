#pragma once
#include <iostream>
#include <sstream>
#include "Venta.h"

using namespace std;

class Factura {
private:
	Venta* venta;
public:
	Factura(Venta*);
	virtual ~Factura();

	// Get y Set POR si acaso
	Venta* getVenta();
	void setVenta(Venta* nuevaVenta);

	// Relacion de USO
	string mostrar_Factura();
};