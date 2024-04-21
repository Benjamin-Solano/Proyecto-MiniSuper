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

double Venta::Obtener_Total_Venta() const {
	Compra* exo = producto; // Puntero al ultimo producto añadido a la compra...
	int total = 0;
	while (exo != nullptr && exo->Obtener_Nombre() != "Carrito") { // El carrito no interesa
		total += exo->Obtener_Costo();
		exo = exo->Obtener_SigProducto();
	}
	return total;
}

// Sobrecarga del operador < para metodo mostrar mejores 5 ventas...
bool Venta::operator < (const Venta& venta) const {
	return (this->Obtener_Total_Venta() < venta.Obtener_Total_Venta());
}


string Venta::toString() const { 
	stringstream s;
	// Este toString va a desaparecer ya que esta funcion se le delegara a la clase factura
	s << "====== LISTA DE PRODUCTOS EN EL CARRITO ======" << endl;
	s << this->producto->toString();
	s << "==============================================" << endl;

	return s.str();
}