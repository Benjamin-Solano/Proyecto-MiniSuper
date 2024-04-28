#pragma once
#include "Producto.h"
#include "Perecedero.h"

class Producto_Perecedero : public Producto {
protected:
	bool nacional;
	double peso;
	// Chip de fecha de vencimiento (class perecedero)
	Perecedero* vencimiento;
public:
	Producto_Perecedero(string, string, string, double, int, int, Fecha*, bool, double, Perecedero*);
	virtual ~Producto_Perecedero();

	bool getNacional();
	double getPeso();
	Perecedero* getFechaVencimiento();


	void setNacional(bool);
	void setPeso(double);
	void setFechaVencimiento(Perecedero*);

	virtual double obtenerPorcentajeGanancia() const {}

	virtual string toString() const = 0;

	// Sobrecarga de Operador No Miembro de Salida de datos...
	virtual friend ostream& operator << (ostream& sal, const Producto& obj) {
		sal << obj.toString() << endl;
		return sal;
	}
};