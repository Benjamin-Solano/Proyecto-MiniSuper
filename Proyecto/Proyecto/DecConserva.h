#pragma once
#include "ProductoAbs.h"
#include "Conserva.h"

class DecConserva : public ProductoAbs {
private: 
	Conserva* ptrConserva; // Enlace al producto (USO / CHIP)
public:
	// Destructor y Constructor
	DecConserva(Compra*, Conserva*);
	virtual ~DecConserva();

	// Get y Set de Emergencia...
	Conserva* getConserva();
	void setConserva(Conserva*);

	// Metodos que interezan de la relacion de USO ...
	string Obtener_Nombre();
	double Obtener_Costo();
	string Obtener_Codigo();



	string toString();

};