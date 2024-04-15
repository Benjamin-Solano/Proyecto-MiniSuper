#pragma once
#include "Compra.h"

class ProductoAbs : public Compra {
protected:
	Compra* ptrCompra; // Aqui se establece el puntero al siguiente producto...
public:
	// Constructor y Destructor...
	ProductoAbs(Compra* com) {	this->ptrCompra = com;	}
	virtual ~ProductoAbs() { }

	// Metodos Virtuales Puros...
	virtual string Obtener_Nombre() = 0;
	virtual string Obtener_Codigo() = 0;
	virtual double Obtener_Costo() = 0;



	virtual string toString() = 0;
};