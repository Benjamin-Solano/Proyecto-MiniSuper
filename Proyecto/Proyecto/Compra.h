#pragma once
#include <iostream>
#include <sstream>

using namespace std;

// No es necesario desarrollar un archivo .h
class Compra {
public:
	virtual ~Compra() { }

	// METODOS VIRTUALES PUROS
	virtual string Obtener_Nombre() = 0;
	virtual string Obtener_Codigo() = 0;
	virtual double Obtener_Costo() = 0;
	virtual Compra* Obtener_SigProducto() = 0;

	virtual string toString() = 0;
};