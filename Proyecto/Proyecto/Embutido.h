#pragma once
#include "Carne.h"
#include "Empaque.h"

class Embutido : public Carne {
private:
	string marca;
	Empaque* empaquePtr;
public:
	Embutido(string, string, string, double, int, int, Fecha*, bool, double, Perecedero*, string, string, string, Empaque*);
	virtual ~Embutido();

	void setMarca(string);
	void setEmpaque(Empaque*);

	string esNacional();

	string getMarca();
	Empaque* getEmpaque();

	string toString();

};