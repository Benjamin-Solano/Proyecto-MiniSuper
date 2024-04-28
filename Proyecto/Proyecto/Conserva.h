#pragma once
#include "Producto.h"

class Conserva : public Producto {
private:
	bool envasado;
public:
	Conserva(string, string, string, double, int, int, Fecha*, bool);

	void setEnvasado(bool);
	bool getEnvasado();

	string toString() const ;
	virtual double obtenerPorcentajeGanancia() const {}

	// Sobrecarga de Operador No Miembro de Salida de datos...
	virtual friend ostream& operator << (ostream& sal, const Producto& obj) {
		sal << obj.toString() << endl;
		return sal;
	}

};