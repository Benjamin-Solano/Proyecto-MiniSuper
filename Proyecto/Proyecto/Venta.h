#pragma once
#include "Fecha.h"
#include "ProductoAbs.h"
#include "Cliente.h"

class Venta {
private:
	Cliente* client;
	Fecha* fechaCompra;
	ProductoAbs* producto;
public:
	Venta();
	Venta(Cliente*, Fecha*, ProductoAbs*);
	virtual ~Venta();

	Cliente* getCliente();
	Fecha* getFecha();
	ProductoAbs* getProducto();

	void setCliente(Cliente*);
	void setFecha(Fecha*);
	void getProducto(ProductoAbs*);

	string toString() const;

	double Obtener_Total_Venta() const;

	// Sobrecarga del operador < para metodo de ordenamiento...
	bool operator < (const Venta& venta) const;

	// Sobrecarga del operador << para mostrar mejores 5 ventas...
	friend ostream& operator << (ostream& sal, const Venta& venta) {
		sal << "============ DATOS DE VENTA ===========" << endl;
		sal << "Cliente      : " << venta.client->getNombre() << endl;
		sal << "ID           : " << venta.client->getCedula() << endl;
		sal << "Fecha        : " << venta.fechaCompra->mostrar_Fecha() << endl;
		sal << "Total a pagar: " << venta.Obtener_Total_Venta() << endl;
		sal << "=======================================" << endl << endl;
		return sal;
	}
};