#pragma once
#include "ProductoPerecedero.h"

class Abarrote : public Producto_Perecedero {
private:
	string nombreEmpresa;
public:
	Abarrote(string, string, string, double, int, int, Fecha*, bool, double, Perecedero*, string);

	virtual ~Abarrote();

	string getNombreEmpresa();

	void setNombreEmpresa(string);

	string esNacional() const ;

	string toString() const;

	// Sobrecarga de Operador No Miembro de Salida de datos...
	virtual friend ostream& operator << (ostream& sal, const Producto& obj) {
		sal << obj.toString() << endl;
		return sal;
	}

};