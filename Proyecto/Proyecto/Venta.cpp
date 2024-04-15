#include "Venta.h"

Venta::Venta(){
	this->client = nullptr;
	this->fechaCompra = nullptr;
	this->producto = nullptr;
}
Venta::Venta(Cliente* c, Fecha* f, ProductoAbs* p) : client(c), fechaCompra(f), producto(p) { }
Venta:: ~Venta(){
	if (client) delete client;
	if (fechaCompra) delete fechaCompra;
	if (producto) delete producto;
}

Cliente* Venta::getCliente() { return client; }
Fecha* Venta::getFecha() { return fechaCompra; }
ProductoAbs* Venta::getProducto() { return producto; }

void Venta::setCliente(Cliente* nuevoCliente) { client = nuevoCliente; }
void Venta::setFecha(Fecha* nuevaFecha) { fechaCompra = nuevaFecha; }
void Venta::getProducto(ProductoAbs* nuevoProducto) { producto = nuevoProducto; }

// no se me olvido esta vez jaja
string Venta::toString() const { 
	stringstream s;
	// Este toString va a desaparecer ya que esta funcion se le delegara a la clase 
	s << "========== FACTURA MINISUPER 'POLLOS HERMANOS' =============" << endl;
	s << "  ID cliente     : " << this->client->getCedula() << endl;
	s << "  Fecha de Compra: " << this->fechaCompra->mostrar_Fecha() << endl;
	s << "+=========+  Productos  +=========+" << endl;
	s << this->producto->toString();
	s << "============================================================" << endl;

	return s.str();
}