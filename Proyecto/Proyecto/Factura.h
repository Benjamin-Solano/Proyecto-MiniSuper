#pragma once
#include <iostream>
#include <sstream>
#include "Venta.h"
#include "Compra.h"

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
	double Obtener_Total_Venta();
	string mostrar_Factura();
};