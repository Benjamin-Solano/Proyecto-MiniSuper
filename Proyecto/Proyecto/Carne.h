#pragma once
#include "ProductoPerecedero.h"

class Carne : public Producto_Perecedero {
protected:
	string nombre_Animal;
	string parte_del_Animal;
public:
	Carne(string, string, string, double, int, int, Fecha*, bool, double, Perecedero*, string, string);
	virtual ~Carne();

	void setNombreAnimal(string);
	void setParte_Del_Animal(string);
	
	string getNombreAnimal();
	string getParteDelAnimal();

	virtual string toString() const = 0;
};