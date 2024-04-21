#pragma once
#include "Compra.h"

class Carrito : public Compra {
public:
	virtual ~Carrito() { }

	virtual string Obtener_Nombre() { return "Carrito"; }
	virtual string Obtener_Codigo() { return ""; }
	virtual double Obtener_Costo() { return 0.0; }
	virtual Compra* Obtener_SigProducto() { return nullptr; }

	// Bueno... tal vez esto si sea necesario
	virtual string toString() { return ""; }


};