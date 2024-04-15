#pragma once
#include "Fecha.h"
#include "ProductoAbs.h"
#include "Cliente.h"

class Venta {
private:
	Cliente* client;
	Fecha* fechaCompra;
	ProductoAbs* producto;
	// Factura* factura;
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


};